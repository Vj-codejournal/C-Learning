#include <stdio.h>

int main() {
    int a , i ,fac =1;

    printf("Enter a number\n");
    scanf("%d", &a);
    i=a;
    while( i>0){
        fac*= i;
        i--;
    }
    printf("the factorial of the given number is %d", fac);
    return 0;
}