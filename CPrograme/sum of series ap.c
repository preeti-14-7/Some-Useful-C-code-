#include<stdio.h>
void main()
{
	int n,a=1,d=1,s=0,i;
	printf("enter the number of terms ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		s=((2*a+(n-1)*d)*n)/2;
	
	}
	
	printf("the sum of the series is %d",s);
}
