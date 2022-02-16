#include<stdio.h>
#include<math.h>
void generate(int);
int main()
{
    int n;
    scanf("%d",&n);
    generate(n);
    return 0;
}
void generate(int v)
{
    int i,j,s=(1<<v);
    for( j=0;j<s;j++)
    {
       {
 
        if((j&(j<<1))==0)
           {
            for( i=(1<<(v-1));i>0;i/=2)
    {
        if((j&i)!=0)
            printf("1");
        else
            printf("0");
 
    }
    printf("  ");
 
           }
       }
 
    }
 
}
