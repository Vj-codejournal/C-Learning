#include <stdio.h> //3:53:20 imp

int main() {
    //97-122 = a-z numbers represent the character ascii table c also follow that table to replace char with a number 
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);
    if(ch<=122 && ch>=97){
        printf("It is lowercase");
    }
    else{
        printf("It is not lowercase");
    }
    return 0;
}