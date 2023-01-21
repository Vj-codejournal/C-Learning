

#include <stdio.h>

int main() {
    int n=5,i=n;
    for (i = n; i >0; i--){
       
        for ( i = 1; i <= (2 * n - 1); i++)
        {
            printf("*");
        }
        printf("\n");
        n--;
    }
    return 0;
}