#include <stdio.h>

int main() {
    FILE *ptr;
    int num;
    ptr = fopen("intf.txt","r");
    if (ptr == NULL){
        printf("This file does not exist");
    }
    else{
    fscanf(ptr, "%d", &num);
    printf("%d", num);
    int num2;
    fscanf(ptr, "%d", &num2);
    printf("%d", num2);
    fclose(ptr); //should close a file
    }
    return 0;
}