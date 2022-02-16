#include<stdio.h>
#include<string.h>
#define size 20
#define type char
int index;
type arr[size];
void push(type no){
	if(isfull()){
		return;
	}
	arr[++index]=no;
	printf("pushed item is %d\n", no);
}  

type pop(){
  if(isempty()){
  	return 0;
  }
  type val=arr[index];
  index--;
  printf("poped item is %d\n", val);
  //printf("poped item is %c\n", val);
  return val;
} 
	
int isempty(){
	if(index == -1)
	{
		printf("Stack is empty\n");
		return 1;
	}
    return 0;
}

int isfull(){
	if(index == size-1)
	{
		printf("stack is full\n");
		return 1;
	}	
    return 0;	
}

void stackDemoFun(){
	
	index = -1;
	int option;
	type no;
	int item;
	while(1)
	{
		printf("enter element from 1 to 4 \n 1 is for push in stack \n 2 is for pop \n 3 is for check whether stack is empty \n 4 is to check whether stack is full  \n "
		        );
		scanf("%d",&option);  
		
	switch(option)
	{ 
		case 1:
			printf("enter the no\n");
			scanf("%d",&no);
			//scanf("%c", &no);
			push(no);
			break;
		case 2:
		    pop();
		    break;
		case 3:
		    isempty();
		    break;
		case 4:
		    isfull();
		    break;
						
	}
		      
   }

}

void reverse(){
	char str[] = {'a', 'b', 'c', '\0'};
	//char str[] = "123654789";
	int len = strlen(str);

	int i;
	 for(i=0;i<len;i++){
	 
        push(str[i]);
    }
        
    for(i=0;i<len;i++)
      {
		str[i] =  pop();
	}
	 printf("Reversed String is: %s \n",str);
}

void main(){
	stackDemoFun();
	 //reverse();
}

	
	

	
	
	
	
	


