#include<stdio.h>
void main()
{
	char more;
	int num,P=0,N=0,Z=0;
	do{
		printf("enter the no that u want\n");
		scanf("%d",&num);
		printf("do u want print more number reply Y/N");
		scanf("%c",&more);
		scanf("%c",&more);
    	if(num > 0)
		{
			P++;
		}else if(num < 0){
			N++;
		}else if(num == 0){
			Z++;
		}
		   
	}while(more=='Y');   
    printf("%d %d %d",P,N,Z);
}   

