#include <stdio.h>

int main() {
    int a=3;
    printf("%d\n", &a);
    printf("%u\n", &a);
    printf("%u\n", *(&a));//%d also work as address int here
    return 0;
}