#include <stdio.h>

int main() {
    int a, i=1;
    printf("Enter a number\n");
    scanf("%d", &a);
    
    while(i<=10){
        printf("%d\n", a*i);
        i++;
    }
    return 0;
}