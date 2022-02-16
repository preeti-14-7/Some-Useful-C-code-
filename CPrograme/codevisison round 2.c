#include <stdio.h>
int main() {
   int i, rows=6, k = 0, count = 0, count1 = 0;
   for (i = 1; i <= rows; ++i) {
      for (int j = 1; j <= rows - i; ++j) {
         printf("  ");
         count++;
      }
      while (k != 2 * i - 1) {
         if (count <= rows - 1) {
            printf("%d ", i + k);
            ++count;
         } else {
            ++count1;
            printf("%d ", (i + k - 2 * count1));
         }
         ++k;
      }
      count1 =  k = 0;
      printf("\n");
   }
   return 0;
}

