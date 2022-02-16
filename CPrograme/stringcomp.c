#include<stdio.h>
 main()
{
	char str1[100],str2[100];
	printf("enter the first string");
	gets(str1);
	printf("enter the 2nd string");
	gets(str2);
	int i;
	for(i=0;str1[i]==str2[i];i++)
	{
		if(str1[i]==str2[i])
		{
			printf("both strins are  equal");
		
		}
		else if(str1[i]>str2[i])
		{
			printf("string one is gretaer than string 2");
	
		}
		else if(str1[i]<str2[i])
		{
			printf("string two is greater than string 1");
;
		}
	}
}
