#include<stdio.h>
int check(int a)
{
	if(a%2==0){
	
		return 1;}
	
	else
	   {
		 return 0;}
	
}
void main()
{
	int a;
	printf("enter the number");
	scanf("%d",&a);
	check(a);
	
}
