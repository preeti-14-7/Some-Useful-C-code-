#include<stdio.h>
void main()
{
	int A,P1,P2,P3,SUM;
	printf("enter the value of A");
	scanf("%d",&A);
	P1=A%10;
	A=A/10;
	P2=A%10;
	A=A/10;
	P3=A%10;
	SUM=P1+P2+P3;
	printf("%d",SUM);
}
