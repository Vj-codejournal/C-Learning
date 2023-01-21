//fibonacci sequence 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... 
//the next number is found by adding up the two numbers before it
#include <stdio.h>
int fib(int n);
int main() {
    int a;
    printf("Enter the term of the series you would like to see\n");
    scanf("%d", &a);

    printf ("The value of this term is %d", fib(a));
    return 0;
}

int fib(int n){
    if (n <= 1){
        return n;
    }
    else{
    return fib(n - 1) + fib(n - 2);
    }
}