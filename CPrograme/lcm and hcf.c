#include<stdio.h>
void main()
{
	int a,b,lcm,gcd,i;
	
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	
	 for (i = 1; i <= a && i <= b; ++i) 
	 {
        
        if (a % i == 0 && b % i == 0)
            gcd = i;
     }

    lcm = (a * b) / gcd;


    printf("HCF = %d\n", gcd);

    printf("LCM= %d ", lcm);
    
}
