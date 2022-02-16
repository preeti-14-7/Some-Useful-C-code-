#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int id,n,i,j,count;
	scanf("%d %d",&id,&n);
	int arr[n];
	for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        //printf("%d", arr[i]);
    }
       count =0;
    for(i=0; i<n; i++)
    {
        for( j= i+1 ; j<n; j++)
        {
            if(arr[i] + arr[j] == id)
			{
              printf("%d %d\n", i, j);
              count++;
            }
        }
        
    }
    if(count == 0)
	{
        printf("-1\n");
    }
   
    return 0;
}
    
    
    


