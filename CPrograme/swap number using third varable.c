#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the value of a,b");
	scanf("%d %d",&a,&b);
	 c=a;
	 a=b;
	 b=c;
	printf("%d %d",a,b); 
}
