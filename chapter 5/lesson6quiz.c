#include <stdio.h>
#include <math.h>

int main() {
    int side;
    printf("Enter the value of side\n");
    scanf("%d",&side);
    printf("the value of area is %f",pow(side,2)); //or do side*side
    // pow return double as value so need %f  
    return 0;
}