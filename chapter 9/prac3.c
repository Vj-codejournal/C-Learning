#include <stdio.h>

struct complex{
    int x;
    int y;
};

int main() {
    struct complex v1,v2;
    v1.x = 3;
    v1.y = 5;
    printf("The complex number is  %d + %di\n", v1.x,v1.y);
    v2.x = 24;
    v2.y = 44;
    printf("The complex number is %d + %di\n", v2.x,v2.y);
    return 0;
}