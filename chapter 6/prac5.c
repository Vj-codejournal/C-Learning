#include <stdio.h>

int main() {
    int i =4;
    int *j =&i;
    int ** k = &j;

    printf("value of i is %d", (**k));
    return 0;
}