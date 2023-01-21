#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};
//for passing structure to function
void show (struct employee emp){
    printf("The Code of employee is : %d \n ",emp.code);
    printf("The Salary of employee is : %f \n ",emp.salary);
    printf("The Name of employee is : %s \n ",emp.name);
    emp.code =34;

}

int main(){
    struct employee e1;
    struct employee *ptr;

    ptr = &e1; 
    ptr ->code =101;
    ptr ->salary = 11.01;
    strcpy(ptr->name,"Harry");
    show(e1);
    printf("The code of employee is:%d\n", e1.code);
    // here also a copy of struct given in a function so changing in function make no change in main 
    return 0;
    
}