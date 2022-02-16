#include<stdio.h>
int index=-1;
int size=0;
int arr[size];

void main{
	int option;
	while(1)
	{
		printf("enter any element from 1 to 4\n 1 is for push in stack \n 2 is for pop \n 3 is for check whether stack is empty and 4 is to check whether stack is full
		        );
		scanf("%d",&option);  
		
	switch(option)
	{
		case 1:
			printf("enter the no");
			scanf("%d",&no);
			push(no);
		case 2:
		    int item=pop();
		case 3;
		    printf("stack is empty");
		case 4;
		    printf("stack is full");
						
	}
		      
   }
}
   
void push(int no){
	if(isfull()){
		printf("stack is  full");
		return ;
	}
	arr[++index]=no;	
}  

int pop{
  if(isempty()){
  	printf("stack is empty");
  	return ;
  }
  int val=arr[index];
  index--;
  return val;
} 
	
int isempty(){
	if(index=-1)
	printf("index is empty");
	return ;
}

int isfull(){
	if(index=size-1)
	printf("index is full")
    return ;	
}

	
	

	
	
	
	
	


