#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};

int main(){
    struct employee e1;
    struct employee *ptr;

    ptr = &e1; // (*ptr) is e1 by value at address
    (*ptr).code =101; // or use ptr ->code = 101;
    printf("%d", e1.code);
    return 0;
    
}