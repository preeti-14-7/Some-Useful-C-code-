#include<stdio.h>
void main()
{
	int F1=0,F2=1,F3,limit;
	printf("the series starts with 0");
	printf("series countinue upto limit 10",limit);
	//scanf("%d",&limit);
	if(limit>=2)
	{
		 printf("fabinoic series is :\n");
		 printf("%d%d",F1,F2);
		 F3=F1+F2;
		 while(F3<=limit)
		 {
		 	printf("%d",F3);
		 	F1=F2;
		 	F2=F3;
		 	F3=F1+F2;
			}
	}
	
	

}
