#include <stdio.h>

int main() {
    int i, sum =0;

    for(i=0;i<=10;i++){
        sum +=i*8;  //i is added to sum in each step

    }
    printf("The value of sum of table of 8is %d",sum );
    return 0;
}