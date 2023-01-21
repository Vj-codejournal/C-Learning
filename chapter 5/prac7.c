#include <stdio.h>
void printpattern(int n); //n is the number of lines we want to print
int main() {
    int a=5;
    printpattern(a);
    return 0;
}

void printpattern(int n){
    if (n==1){
        printf("*\n");
        return;
    }
    printpattern(n-1);
    for (int i=0;i<(2*n-1);i++){
        printf("*");
    }
    printf("\n");
    
}