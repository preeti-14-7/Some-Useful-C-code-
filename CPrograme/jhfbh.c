#include<stdio.h>
void main()
{
	int m1,m2,m3,m4,m5;
	float AVG;
    printf("enter the marks of a student in all five subjects");
	scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
	 AVG = (m1+m2+m3+m4+m5)/5;
	printf("%f",AVG);
	
}
