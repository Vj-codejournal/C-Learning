//how to take input
#include <stdio.h>

int main(){

    int a, b; // by this we made these variables in memory. we can assign them if we want.
    printf("Enter the value of a \n");
    scanf("%d", &a); // it take input %d is format specifier taken as a is as int. & means address of a.
                     // &a is we have give it address on where to store a. so in memory it assign variable the value of input.



    printf("Enter the value of b \n");
    scanf("%d", &b);

    printf("the sum of a and b is %d", a + b);

    return 0;

}
