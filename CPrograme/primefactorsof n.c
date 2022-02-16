#include<stdio.h>
#include<math.h>
void primeFactors(int n)
 {
   int i;
   while(n % 2 == 0) 
   {
      printf("%d, ", 2);
      n = n/2; //reduce n by dividing this by 2
   }
   for(i = 3; i <= sqrt(n); i=i+2)
   { //i will increase by 2, to get only odd numbers
      while(n % i == 0)
	   {
         printf("%d, ", i);
         n = n/i;
       }
   }
   if(n > 2)
   {
      printf("%d, ", n);
   }
}
int main() {
   int n;
   printf("Enter a number: ");
   scanf("%d", &n);
   primeFactors(n);
   return 0;
}
