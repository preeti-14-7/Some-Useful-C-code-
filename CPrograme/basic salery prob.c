#include<stdio.h>
void main()
{
	int GS,BS,DA,HRA;
	printf("enter the value of BS");
	scanf("%d",&BS);
	if(BS>=15000)
	{
	  DA=(30*BS)/100;
	 HRA=(20%BS)/100; 
	else if (BS>=10000)
		DA=(25*BS)/100;
		HRA=(20*BS)/100;
	else if(BS>8000)
		DA=(20*BS)/100;
		HRA=(20*BS)/100;
				}			
	 } 
	 GS=BS+DA+HRA;
	 printf("%d",HRA);
}
