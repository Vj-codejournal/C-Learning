#include <stdio.h>

struct vector{
    int x;
    int y;
};

int main() {
    struct vector v1,v2;
    v1.x = 34;
    v1.y = 54;
    printf("X dimension of v1 is %d and Y dimension of v1 is %d\n", v1.x,v1.y);
    v2.x = 24;
    v2.y = 44;
    printf("X dimension of v2 is %d and Y dimension of v2 is %d\n", v2.x,v2.y);
    return 0;
}