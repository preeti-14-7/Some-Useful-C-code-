#include<stdio.h>
void main()
{
	int x,y,i=1,pow=1;
	printf("enter the two number x and y");
	scanf("%d %d",&x,&y);
	while(i<=y)
	{
		pow=pow*x;
		i++;
	}
	printf("%d %d %d",x,y,pow);
	
}
