

#include <stdio.h>

int main() {
    FILE *ptr;
    ptr = fopen("sample.txt","r");
    //fgetc demo for reading a file
    printf("The value of my character is %c\n", fgetc(ptr));// cant keep c here as lesson 5 T stored in it cannot change the value
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    

    return 0;
}
