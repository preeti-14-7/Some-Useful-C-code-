#include <stdio.h>
void main()
{
    char name1[30],name2[30],name3[30],name4[30],name5[30],name6[30];
    printf("Enter five names name: \n ");
    fgets(name1, 30, stdin);
    fgets(name2, 30, stdin);
    fgets(name3, 30, stdin);
    fgets(name4, 30, stdin);
    fgets(name5, 30, stdin);
    
    printf("enter the name that u want to serach \n ");
    fgets(name6, 30, stdin);
    if(checkequal(name1,name6)==1)
        {
		    printf("YES");
			 return;}
    if(checkequal(name2,name6)==1)     
        {
		  printf("YES"); 
		  return;
		  }
    if(checkequal(name3,name6)==1)     
        {
		 printf("YES");
		  return;
		 }
    if(checkequal(name4,name6)==1) 
	   {
		 printf("YES"); 
		  return;
		 }
    if(checkequal(name5,name6)==1)	    
		{
			printf("YES");  
			 return;
		}
	else 
	    {
		printf("NO");
	    } 
}
 
  int checkequal(char name1[30],char name2[30])
  {
  	int i;
  	for(i=0;i<30 && name1[i] != '\0' ;i++)
  	{
  		if(name1[i] == name2[i])
  		{
  			continue;
		}else{
			break;
		}
	}
	
	if(i == 30)
		return 1;
		
	if(name1[i] == '\0' && name2[i] == '\0')
	    return 1;
    else 
	    return 0;		  
  }









