#include <stdio.h>
#include <string.h>
#define size 10
struct product
{
  char name[50];
  int price;
} s[10];

void printInformtion(struct product s[], int len){
	 for (int i = 0; i <=3; i++)
    {

      printf ("product name ");
      printf ("%s ", s[i].name);
      printf ("price of product: %d \n", s[i].price);
      
    }
}
int main ()
{
  for (int i = 0; i <=3; i++)
    {
      printf ("Enter information:\n");
      printf ("Enter name: \n");
      fgets (s[i].name, sizeof (s[i].name), stdin);
      printf ("Enter the price: ");
      scanf ("%d", &s[i].price);
       // flush last new line characters 
      char ch = getchar ();
    }
   printInformtion(s,3);

    printf ("Displaying Information after sorting :\n\n");

   for(int i=0;i<=3;i++)
   {
   	     int min=i;
   	     struct product temp;
   	     for(int k=i+1;k<=3;k++)
   	     {   
   	         if( s[min].price>s[k].price)
   	              min=k;
			}
		  {
            strcpy( temp.name ,  s[i].name);
            temp.price=s[i].price;
            strcpy(s[i].name, s[min].name);
            s[i].price=s[min].price;
            strcpy(s[min].name, temp.name);
            s[min].price=temp.price;
            
         }	
   }
 
 
printInformtion(s,3);
  return 0;
}

