#include <stdio.h>
int sum(int n);
int main() {
    int a =15;
    printf("The sum of first 15 natural number is %d \n", sum(a));
    return 0;
}

int sum(int n){
    if (n==1){
        return 1;
    }
    else{
        return n + sum(n-1);
    }
}