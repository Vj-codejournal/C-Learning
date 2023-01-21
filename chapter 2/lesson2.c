#include <stdio.h>

int main()
{
    int x = 2;
    int y = 3;

    printf("The value of 3*x - 8*y is %d \n", 3*x - 8*y);

    printf("The value of 3 * x / 8 * y is %d \n", 3 * x / 8 * y);
    // it give 0 here as both num and deno will come int so final answer also int.
    // answer will be 0... something so it become 0


    printf("The value of 8*y / 3*x is %d \n", 8 * y / 3 * x);
    // 8*3 /3*x = 24/6 will give wrong answer
    // 24/3*2
    // 8*2
    // 16

    return 0;
}