#include <stdio.h>
void display();  // function prototype
int main() {
    int a;
    printf("Initializing display function\n");
    display();  //function call - called the function to display here 
    printf("this statement will be executed after display");
    return 0;
}

void display(){
    printf("Hi I am display\n");  //function defination - what it will display when called
}