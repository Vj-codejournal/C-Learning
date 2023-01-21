// Q3

#include <stdio.h>

int main() {
    float celsius;
    

    printf("Enter Temp. in celsius \n");
    scanf("%f", &celsius);

    float farenheit = celsius* (9.0 / 5) + 32 ;// have to write here after taking value of celsius // have to write 9.0 to make it float or if 9/5 then both integer so give interger 1 and not 1.8
    printf("It will be %f F", farenheit);       //or do (celsius* 9 / 5) here celsius is float so final can be float so give correct answer
    return 0;
}