#include<stdio.h>
void main()
{
	int i=1,H,P;
	while(i<=10)
	{
		printf("enter the no of hours H");
	    scanf("%d",&H);
	
		if(H>40)
		{
			H=H-40;
		 	P=12*H;
		 	printf("%d",P);
        }else{
	      printf("\n no over pay");
	    }
		i++;
	}
}
