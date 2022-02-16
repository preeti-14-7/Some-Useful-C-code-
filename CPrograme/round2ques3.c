#include<stdio.h>           
main( )               
{
    int data[6],i,j=-1,n;
    
    for(i=0;i<=4;i++)          
        scanf("%d",&data[i]);  
    
    for(i=0;i<=4;i++)
    {
        for(int k=i+1;k<5;k++)   
        {
            if(data[i]>data[k])
            {
                int t=data[k];
                data[k]=data[i];
                data[i]=t;
            }
        }
    }
    scanf("%d",&n);

    for(i=0;i<5;i++)
    {
        if(n<data[i])
        {
        j=i;              
        break;              
    }
  }       
              
    for(i=4;i>=j;i-=1)      
      data[i+1]=data[i];      
    data[i+1]=n;              
   
    for(i=0;i<6;i++)             
      printf("\n%d",data[i]);       
}
