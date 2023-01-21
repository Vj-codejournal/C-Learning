#include <stdio.h>
int mulby10(int  *x);
int main() {
    int a=5;
    printf("the new value of a is %d\n",mulby10(&a));
    return 0;
}

int mulby10(int *x){
    int temp = (*x)*10;
    // can do printf here and do mulby10(a) in main function 
    return temp;
}

