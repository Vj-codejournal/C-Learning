// Q1 B calc area of rectangle by external input

#include <stdio.h>

int main() {
    int length, width;
    
    
    printf("Enter the value of length\n");
    scanf("%d", &length);

    printf("Enter the value of width\n");
    scanf("%d", &width);

    int area = length*width;
    
    printf("Area of the rectangle is %d", area);

    return 0;
}