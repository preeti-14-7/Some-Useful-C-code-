#include<stdio.h>
void main()
{
	int i=1,j;
	float sum=0.0,fact;
	while(i<=7)
	{
		fact=1.0;
		for(j=1;j<=i;j++)
		
			fact=(fact*j);
			
			
	    sum=sum+(i/fact);
		i++;	
	}
	printf("the sum of the series = %f",sum);
}
