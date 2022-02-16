#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void roman() {


     int index=0,Y;
    char result[100];
    scanf("%d",&Y);
    while(Y>0)
    {
        if(Y>=1000)
        {
            result[index++] = 'M';
            Y = Y - 1000;
        }
         else if(Y>=500)
         {
            if(Y>=900){
                result[index++] = 'C';
                result[index++] = 'M';
                Y =  Y - 900;
            }else{
                result[index++] = 'D';
                   Y = Y-500;
            }
                
         }
        else if(Y>=100)
        {
            if(Y>=400){
                result[index++] = 'C';
                result[index++] = 'D';
                Y =  Y - 400;
            }else{
                result[index++] = 'C';
                Y = Y-100;
            }
            
         } 
        else if(Y>=50)
        {
            if(Y>=90){
                result[index++] = 'X';
                result[index++] = 'L';
                Y =  Y - 90;
            }else{
                result[index++] = 'L';
                Y = Y-50;
            }
            
         } 
        else if(Y>=10)
        {
            if(Y>=40){
                result[index++] = 'X';
                result[index++] = 'L';
                Y =  Y - 40;
            }else{
            result[index++] = 'X';
            Y = Y - 10;
            }
            
         } 
        else if(Y>=5)
        {
            if(Y>=9){
                result[index++] = 'I';
                result[index++] = 'X';
                Y =  Y - 9;
            }else{
                result[index++] = 'V';
                Y = Y-5;
            }
        
        } 
        else if(Y>=1)
       {
            if(Y>=4)
            {
                result[index++] = 'I';
                result[index++] = 'V';
                Y =  Y - 4;
            }else
            {
            result[index++] = 'I';
            Y = Y-1;
            }
        
         }     
      }    
     printf("%s",result);
 }


 int  main(){
 	roman();
 }
