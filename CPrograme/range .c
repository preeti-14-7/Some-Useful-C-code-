#include<stdio.h>
void main()
{
     int num,max=-32768,min=32767,range;
     char more;
	do{
		printf("enter the numbers that u want ");
		scanf("%d",&num);
		printf("do u want to print more number print Y/N");
		scanf("%c",&more);
		scanf("%c",&more);
		if(max<num)
		{
			max=num;
		}
		else if(min>num)
		{
			min=num;
		}
		
	}while(more=='Y');
	   range=max-min;
	
	printf("%d",range);
}
