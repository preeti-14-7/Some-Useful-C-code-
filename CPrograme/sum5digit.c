#include<stdio.h>
void main()
{
	int A,P1,P2,P3,P4,P5,SUM;
	printf("enetr the 5 digit number ");
	scanf("%d",&A);
	P1=A%10;
	A=A/10;
	P2=A%10;
	A=A/10;
	P3=A%10;
	A = A/10;
	P4=A%10;
	A=A/10;
	P5=A%10;
	SUM=P1+P2+P3+P4+P5;
	printf("sum of the digit %d",SUM);
}
