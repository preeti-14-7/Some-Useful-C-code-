#include<stdio.h>
void main()
{
	int turn  = 1; /* turn 1 coresponds to user and turn 2 coresponds to computer*/
	int val = 21;
	int userInput;
	int reduceVal;
	
	while(val > 1){
		
		if(turn == 1){
			do{
				printf("enter the value that you wants to pick between 1 to 4 \n ");
				scanf("%d", &userInput);	
			}while(userInput > 4 || userInput < 1);
			val = val - userInput;
			turn = 2;
		}else if(turn == 2){
			reduceVal = 5 - userInput;
			val = val - reduceVal;
			turn = 1;
		}
		printf("current value of val is %d \n ", val);
			
	}
	
	if(turn == 1){
		printf("User Lost");
	}else if(turn == 2){
		printf("Computer lost");
	}
	
}
