#include<stdio.h>
 main()
 {
 	char string[30];
 	int n,s;
 	printf("enter the string ");
 	gets(string);
 	printf("enter the position from where");
 	scanf("%d",&s);
 	printf("enter numbers of charcter in the substring:");
 	scanf("%d",&n);
 	substr(string,s,n);
 	printf("\n");
		}
	substr(char*string,int s,int n) 
	{
		int i;
			for(i=0;i<s-1;i++)
			{
				string++;
				if(*string=="\0")
				{
					printf("there are less than %d charcters in string\n",s);
				 exit(1);
				}
				
			}
		for(i=1;i<=n;i++)
		{
			printf("%c",*string);
				string++;
		}	
	}
 

