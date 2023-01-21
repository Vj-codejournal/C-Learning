#include <stdio.h>

int main() {
    int a , i ,fac =1;

    printf("Enter a number\n");
    scanf("%d", &a);

    for (i=a; i>0 ; i--){
        fac*= i;
    }
    printf("the factorial of the given number is %d", fac);
    return 0;
}