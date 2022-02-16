#include<stdio.h>
#include<string.h>
void main()
{   int i;
	char a[30][30],b[30];
	for(i=0;i<4;i++)
	{
		fgets(a[i],30,stdin);
	}
	printf("enter for search");
	fgets(b,30,stdin);
	for(i=0;i<4;i++)
	{
		if(strcmp(a[i],b)==0)
		
		{
			printf("yes");
		}
	}
}
