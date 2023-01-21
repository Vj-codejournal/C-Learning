#include <stdio.h>
#include <math.h>

int main() {
    int a=4,b=8;
    printf("the value of b/a is : %d\n ", b / a );
    printf("5 when divided by 2 leaves the remainder %d\n ", 5%2);


    //printf("the value of 5 /2 is %f \n", 5/2);  %f not work here ? as 5 and 2 are int?
    printf("the value of 5 /2 is %d \n", 5/2);
    printf("the value of 5 /2 is %f \n", 5.0/2); // cant us %d here as float and int give float

    int c = 4.6;
    printf("the value of c is %d \n", c); // c get demoted to 4


    printf("the value of 4 to the power 5 is %f\n", pow(4,5));



    return 0;
}