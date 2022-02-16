#include<stdio.h>
void main()
{
	int a,b,r;
	float CFS1,CFS2,AR1,AR2; //CFS1 is circumference of rectangle and AR1 is area and 2 is used for circle//
	printf("enter the value of lengh breadth and radius of circle");
	scanf("%d %d %d",&a,&b,&r);
	CFS1 = 2*(a+b);
	AR1 = a*b;
	CFS2 = 2*3.14*r;
	AR2 = 3.14*r*r;
	printf("%f %f %f %f", CFS1,AR1,CFS2,AR2);
}
