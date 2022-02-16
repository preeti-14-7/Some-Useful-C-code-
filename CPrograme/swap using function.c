#include<stdio.h>
int swap(int x,int y)
{
	int z;
	z=x;
	x=y;
	y=z;
	return x,y;
}
void main()
{
	int x,y;
	printf("enter value of x and y");
	scanf("%d %d",&x,&y);
	
	printf("%d %d",x,y);
	
}
