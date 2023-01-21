#include <stdio.h>

int main() {
    FILE *ptr;

    ptr = fopen("sample1.txt","w");
    fputc('c',ptr);
    fputc('c',ptr);
    fclose(ptr);
    return 0;
}