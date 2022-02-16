#include<stdio.h> 
#include<conio.h>
#include<stdlib.h>
int main(void)
{
	int i,j;
	int m,k=4;
	char st[] = "WXYZ";
	for(i=0;i<4;i++)
	{
	for(m=0;m<k;m++)
	{
		printf(" ");
	}
	for(j=0;j<=i;j++)
	{
		printf("%2c", st[j]);
	}
	    printf("\n");
	    k--;
    }
    //printf("%d\n",k);
    k=k+2;
    for(i=3;i>0;i--)
    {
    	for(m=0;m<k;m++)
    	{
    		printf(" ");
		}
       for(j=0;j<i;j++)
       {
       	printf("%2c",st[j]);
	   }
	   printf("\n");
	   k++;
	}
   //getch();
     return EXIT_SUCCESS;	
}
