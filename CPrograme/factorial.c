#include<stdio.h>
void main()
{
	int i=1,fact=1,num;
	printf("enter any no less than 34");
	scanf("%d",&num);
	while(i<=num)
	{
		fact=fact*i;
		i++;
	}
	printf("%d %d",num,fact);
	
}
