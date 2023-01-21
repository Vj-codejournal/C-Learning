#include <stdio.h>

int main() {
    int a,b,c;
    float total;

    printf("Enter your marks is Maths (out of 100)\n");
    scanf("%d", &a);
    printf("Enter your marks is Physics (out of 100) \n");
    scanf("%d", &b);
    printf("Enter your marks is Chemistry (out of 100) \n");
    scanf("%d", &c);

    total = (a + b + c)/3;

    if((total <40) || (a < 33) || (b < 33) || (c < 33)){
        printf("Your total percentage is %f and You have failed", total);
    }
    else{
        printf("Your total percentage is %f and You have passed!", total);
    }

    return 0;
}