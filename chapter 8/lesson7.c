#include<stdio.h>
#include <string.h>

int main(){
    char *st = "Harry";
    int a = strlen(st);// can make this using while loop increment till \0 come the value of i is the number of character
    printf("The length of string st is %d", a);
    return 0;
}