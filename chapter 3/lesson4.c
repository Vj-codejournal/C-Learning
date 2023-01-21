#include<stdio.h> // timestamp 2:54:00

int main(){
    int age;
    int vipPass = 0;// given 0 as if 0 given to variable false in general and we need a specific value 2 when it be valid that is written below in if
    // vipPass = 2; now it is given 2 permanently so see if statement vippass valid now no matter what the age is he can drive

    printf("Enter your age\n");
    scanf("%d", &age); 

    // if (age <= 70 && age>=18)
    if ((age <= 70 && age>=18) || (vipPass==2))
    {
        printf("You are above 18 and below 70, you can drive\n");
    }
    else
    {
        printf("You cannot drive\n");
    }
   
    return 0;
}