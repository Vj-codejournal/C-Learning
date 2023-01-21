#include<stdio.h>
#include<string.h>

int main(){
    char st1[45] = "Hello";// e and a mismatch e has bigger ascii value so value is +ve see e's ascii value(of st1) - a's ascii value(of st2) if it is +ve the strcmp +ve 
    char *st2 = "Harry";
    int val = strcmp(st1, st2);
    printf("Now the val is %d", val);
    return 0;
}