#include <stdio.h>

int main() {
    int age;
    printf("Enter your age\n");
    scanf("%d", age);

    if(age>=90 || age<18){ 
        printf("You cannot drive\n");
    }
    else{
        printf("You can drive\n");
    }


   return 0;
}