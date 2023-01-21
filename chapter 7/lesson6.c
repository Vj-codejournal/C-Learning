#include <stdio.h>

int main() {
    int a=1 ,b=3;
    int *x =&a;
    int *y =&b;

    int c = x - y;

    printf("%d\n",c);
    printf("%d\n",x);
    printf("%d\n",y);
    y++;
    printf("%d\n",*x);
    printf("%d\n",*y);// see y address increased by 4 so now its also same as x so also point a 
    c =x-y;
    printf("%d\n",c);

    int d =&a - &b;
    printf("%d\n",d);
    return 0;
}

// ask why address difference coming 1