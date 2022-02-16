#include<stdio.h>
void main()
{
	int c,d,temp;
	printf("enter the value of c and d");
	scanf("%d %d",&c,&d);
	temp = c;
	c=d;
	d=temp;
	printf(" the new value of c and d is %d %d",c,d);
}
