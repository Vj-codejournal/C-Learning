//if and else tell even and odd
#include <stdio.h>

int main() {
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);

    // in if to say equal have to use ==
    if(a%2==0){  
        printf("%d is even\n", a);
    }
    else{
        printf("%d is odd\n", a);
    }
    return 0;
}