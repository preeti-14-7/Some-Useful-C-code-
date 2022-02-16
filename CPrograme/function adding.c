#include<stdio.h>
int add(int x,int y)
{
	int z;
	z=x+y;
	return z;
}
void main()
{
	int x,y,z;
	printf("enter x and y");
	scanf("%d %d",&x,&y);
	z=add(x,y);
	printf("%d",z);
}

