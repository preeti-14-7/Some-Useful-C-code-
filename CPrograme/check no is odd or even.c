#include<stdio.h>
void main()
{
	int a;
	printf("enter the no a");
	scanf("%d",&a);
	if((a%400==0)||(a%4==0 && a%100!=0))
	{
		printf("a is leap year");
	}
   else
   {
   	  printf("a is not leap year");
		} 	
}
