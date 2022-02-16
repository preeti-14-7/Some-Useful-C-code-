#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    char name[11];
    scanf("%s", name);
    int arr[26];
    int i = 0, m;
    int res = 0;
    while(name[i] != '\0'){
        name[i] = tolower(name[i]);
        arr[name[i] - 'a'] = 1;
        i++;
    }
    scanf("%d", &m);
    char food[31];
    for(i=0; i<m; i++){
        scanf("%s", food);
        int j = 0;
        while(food[j] != '\0'){
            food[j] = tolower(food[j]);
            if(arr[food[j] - 'a'] == 1)
            {
                res++;
                break;
            }
            j++;
        }
    }
    
    printf("%d", res);
    return 0;
}
