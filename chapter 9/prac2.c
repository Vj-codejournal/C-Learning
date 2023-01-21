#include <stdio.h>

struct vector{
    int x;
    int y;
};

struct vector sumVector(struct vector v1, struct vector v2){
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

int main() {
    struct vector v1,v2, sum;
    v1.x = 34;
    v1.y = 54;
    printf("X dimension of v1 is %d and Y dimension of v1 is %d\n", v1.x,v1.y);
    v2.x = 24;
    v2.y = 44;
    printf("X dimension of v2 is %d and Y dimension of v2 is %d\n", v2.x,v2.y);

    sum = sumVector(v1,v2);
    printf("x dim of result is %d and y dim is %d\n",sum.x,sum.y);
    
    return 0;
}