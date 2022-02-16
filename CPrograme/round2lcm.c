#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,l;
scanf("%d%d",&a,&b);
for(l=a<=b?b:a;l<a*b;l=l+1) 
   if(l%a==0&&l%b==0)
   {
   	break;
   }
printf("%d",l);
return 0;
getch();
}

