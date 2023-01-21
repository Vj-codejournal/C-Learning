#include<stdio.h>

int main(){
    int i = 34;
    int *j = &i; // j will now store the address of i// j is the variable not *j * is to make it a pointer
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);// it becomes *(&i) so now it tells value
    printf("The address of i is %u\n", &i);
    printf("The address of i is %u\n", j); // j is &i so give address
    printf("The address of j is %u\n", &j);
    printf("The value of j is %u\n", *(&j));
    return 0;
}