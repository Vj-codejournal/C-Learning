#include<stdio.h>
#include<string.h>

int main(){
    char st1[45] = "Hel";// in st1 there is null char compared to st2's o see both ascii value
    char *st2 = "Helo"; // \0 ascii value is 0 and o's ascii value is 111 so see substraction is -ve
    int val = strcmp(st1, st2);
    printf("Now the val is %d", val);
    return 0;
}