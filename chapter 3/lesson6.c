#include <stdio.h>

int main() {
    int num;

    printf("Enter your number \n");
    scanf("%d", &num);

    if(num==1){
        printf("Your number is 1\n"); // it checks all of else if like if and if all false go to else
    }
    else if(num==2){
        printf("Your number is 2\n");
    }
    else if(num==3){
        printf("Your number is 3\n");
    }
    else{
        printf("Its not 1,2 or 3!\n");
    }


    // "if" written here is independent of the above
    return 0;
}