#include <stdio.h>

int main() {
    //char ptr[]="Harry Bhai";// cant change with array format can only change with ptr format
    char *ptr ="Harry bhai";
    ptr ="Shubham bhai";
    printf("%s", ptr);
    return 0;
}