#include <stdio.h>

int main() {
    int i, sum =0;

    for(i=0;i<=10;i++){
        sum +=i;  //i is added to sum in each step

    }
    printf("The value of sum 1 to 10 is %d",sum );
    return 0;
}