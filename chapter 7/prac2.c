#include <stdio.h>

int main() {
    int mul[10];
    for (int i=0;i<10;i++){// this loop is to store values in array
        mul[i] = 5*(i+1); // +1 as start from 0
        
    }

    for (int i=0;i<10;i++){
        printf("5 X %d = %d\n",i+1,mul[i]);
    }
    return 0;
}