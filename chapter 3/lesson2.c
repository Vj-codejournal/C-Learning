#include <stdio.h>

int main() {
    int age;
    printf("Enter your age\n");
    scanf("%d", age);

    if(age>=90){
        printf("You are above 90, you cannot drive\n");
    }
    else{
        printf("You can drive\n");
    }


    //if(age<18){
    //    printf("You are below 18, you cannot drive\n");
   // } see next lesson if they are contadicting each other have to write in same if if total different condition can use other if like done for half century.
    

    //if(age=50){           //= is a assignment operator and in c any non zero no. is considered true so it will print
      //  printf("Half Century\n");}
    return 0;
}