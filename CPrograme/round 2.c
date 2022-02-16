#include<stdio.h>
#include<string.h>
#define MAX_LIMIT 20              

int main()
{
	char str1[MAX_LIMIT];
	char str2[MAX_LIMIT];
	
	fgets(str1, MAX_LIMIT, stdin);    
	fgets(str2, MAX_LIMIT, stdin);   
	
	int ind1 = 0;
	int ind2 = 0;
	int len1 = strlen(str1);
	int len2 = strlen(str2); 
	if(len1 != len2){
	    printf("No");
	    return 0;
	}
	while(ind1 < len1 && ind2 < len2 && str1[ind1] == str2[ind2])
	{
	    ind1++;
	    ind2++;
	}
	if(ind1 == len1 && ind2 == len2)
		printf("Yes");
	else
 	    printf("No");
	
// 	if(str1 == str2)    
// 	printf("Yes");
// 	else
// 	printf("No");
	
	return 0;
	
