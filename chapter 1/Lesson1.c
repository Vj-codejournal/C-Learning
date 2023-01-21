
#include <stdio.h>


int main(){
    int a = 4;
    int b = 8;
    float c = 8.9;
    char d = 'g';

    printf("the value of a and b is %d and %d respectively. \n", a, b); // as a has integer in it so to put that value have to put %d if it was decimal put %f
    printf("the value of c is %f. \n", c);  // \n is for new line
    printf("the value of d is %c. \n", d);
    printf("sum of a and b is %d", a+b);
    return 0;

}