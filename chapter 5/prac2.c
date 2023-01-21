#include <stdio.h>
float converter(float cel);
int main() {
    float a;
    printf("Enter temp in celsius\n");
    scanf("%f", &a);
    printf("It will be %f F",converter(a));
    return 0;
}

float converter(float cel){
    float fahrenheit;
    fahrenheit = cel * (9.0/5) + 32;
    return fahrenheit;
}