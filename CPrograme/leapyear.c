#include<stdio.h>
int main()
{
	int a;
	printf("enter the year");
	scanf("%d",&a);
	int leap;
	leap = find(a);
	if(leap==1)
		printf("%d year is leap year ",a);
	else
		printf("%d year is not a leap year ",a);
	return 0;
}
 int find(int a)
 {
 	int i=0;
	if((a % 4 && a % 100 && a % 400)==0)
		i=1;
	else
		i=0;
	return i;
 }
