#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a, b,i,j;
    scanf("%d %d", &a, &b);
    int count = 0;
    for(i=b; i>=a; i--){
        int flag = 0;
        for(j = 2; j<= i/2; j++){
            if(i%j == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            count++;
            if(count == 2){
                printf("%d", i);
                return 0;
            }
        }
        
    }
    return 0;
}

