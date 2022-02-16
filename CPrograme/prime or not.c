#include<stdio.h>
void main()
{
	int a,i,found=0;
	
	printf("enter the number\n");
	scanf("%d",&a);
	
	for(i=2;i<=a/2;i++)
	{
		if(a%i==0)
		{
				found=1;
			     break;
		}
       
	}
	
	if(found==1)
	  printf("no");
	else
	printf("yes");  

}
