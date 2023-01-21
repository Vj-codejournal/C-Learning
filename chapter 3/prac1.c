#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks:\n");
    scanf("%d", &marks);

    if(marks >= 90 && marks <=100){
        printf("Your Grade is A\n");
    }
    else if(marks >= 90 && marks <=80){
        printf("Your Grade is B\n");
    }
    else if(marks >= 80 && marks <=70){
        printf("Your Grade is C\n");
    }
    else if(marks >= 70 && marks <= 60){
        printf("Your Grade is D\n");
    }
    else if(marks < 60){
        printf("Your Grade is F\n");
    }

    return 0;
}