
//another way for vippass if for not all ages and a single exceptional age we want to give a pass

#include<stdio.h> // timestamp 2:54:00

int main(){
    int age;
    

    printf("Enter your age\n");
    scanf("%d", &age); 

    int vipPass =  age; // have to put it after we have taken the value of age

    // if (age <= 70 && age>=18)
    if ((age <= 70 && age>=18) || (vipPass==2))
    {
        printf("You are above 18 and below 70 or you are 2, you can drive\n");
    }
    else
    {
        printf("You cannot drive\n");
    }
   
    return 0;
}