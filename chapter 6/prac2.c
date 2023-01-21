//when done by call by reference address dont change as we have taken the address only
#include <stdio.h>
int adstaker(int * x);
int main() {
    int a=4;


    printf("address of a is %u \n",&a);
    adstaker(&a);

    return 0;
}

int adstaker(int *x){
    printf ("address of a is %d\n",x); 
}