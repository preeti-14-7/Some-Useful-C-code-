#include<stdio.h>
#include<string.h>
void main()
{
    char s[1000],w[1000];  
    int n,a[1000],i,j,k=0,l,found=0,t=0;
 
    printf("Enter  the string : ");
    gets(s);
    printf("Enter word to be searched: ");
    gets(w);
    l=strlen(w);
    
    //iterate over each character in s
   for (i = 0;s[i] != '\0';i++)
   {
   	   if (s[i]==w[1])
   	 
   	   	for(j=0;j<l; j++)
   	   	{
   	   		if (w[j]==s[i])
   	   		{
   	   			found=1;
   	   			break;
			}
		}
	
	
	}
	if(found==1)
	printf("YES");
	else
	printf("NO");
   	   
   }
    
    	//check if ith char in s is equal to first char of w
    		//iterate over all char in w
    			//and check if chars are matching in s
    			
  
   


    
    

