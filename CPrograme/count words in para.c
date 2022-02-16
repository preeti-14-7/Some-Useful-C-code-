#include<stdio.h>
#include<string.h>
void main()
{
	char s[1000];
	int i,count=0;
	printf("enter the paragraph:\n");
    //scanf("%s",s);
    fgets(s, 1000, stdin);
	
	for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')
            count++;    
    }
    
    printf("Number of words in given string are: %d\n", count + 1);
    

}
