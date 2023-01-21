// when done by call by value it takes a copy of variable so it changes the address
#include <stdio.h>
int adstaker(int x);
int main() {
    int a=4;


    printf("address of a is %u \n",&a);
    adstaker(a);

    return 0;
}

int adstaker(int x){
    printf ("address of a from inside the function is  %d\n",&x); 
}