#include <stdio.h>

int main() {
    int a =3;

    printf("address is %u\n", &a);
    printf("value of variable is %d\n", *(&a));
//or
    int *ptr;
    ptr = &a;
    printf("address is %u\n", ptr);
    printf("value of variable is %d\n", *ptr);

    return 0;
}