#include <stdio.h>

int main() {
    char str[]="Varun";
    char *ptr =str;  // point to 1st element of array same as &str[0]
    while(*ptr != '\0'){ //value at address become \0
        printf("%c", *ptr);
        ptr++; // if we dont use \0 keep going fill with garbage values made by it
    }
    return 0;
}