#include<stdio.h>
main()
{
	char text[25],pattern[80];
	int position;
	printf("enter the text:");
	gets(text);
	printf("enter the pattern for matching");
	gets(pattern);
	position==pmatch(text,pattern);
	if(position==0)
	    printf("%s does not match in %s",pattern,text);
	else
	   printf("%s starts at %d\n",pattern,position);    
}

 int pmatch(char text[],char pattern[])
	{
		   int matched,i,j,k=0;
		   if(strlen(pattern)>strlen(text))
		         return 0;
		   for(i=0;i<=strlen(text);i++)
					
					{
						   k=0;
						   for(j=i;k<strlen(pattern);j++,k++)
						   {
						   	if(pattern[k]!=text[j])
						   	{
						   		    matched=0;
						   		    break;
										}
										else 
										      matched=1;
									}
						   if(matched==1)
									       return(i+1);						
						
											}      
	          return 0;	
		
		} 
