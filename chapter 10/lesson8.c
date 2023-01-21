#include <stdio.h>

int main() {
    FILE *ptr;
    char c;
    ptr = fopen("sample.txt","r");
    c = fgetc(ptr);
    while(c != EOF){
        printf("%c", c);
        c = fgetc(ptr);//it goes on till it reach the end of file and return end of file then
    }// as loop repeat it go to next character
    return 0;
}