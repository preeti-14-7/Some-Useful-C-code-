#include<stdio.h>
int main()
{
int i, f;
int factorial();

printf("Enter the number :");
scanf ("%d", &i);

f=factorial(i);

printf(" %d %d\n", i, f);

}

int factorial(int num)
{
int a, fact;
for (a=1,fact=1;a<=num; a++)
{

fact=fact*a;

}
return fact;

}
