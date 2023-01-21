#include<stdio.h>
#include<string.h>

typedef struct employee{
    int code;
    float salary;
    char name[20];
}emp;

void show (emp emp1){
    printf("The Code of employee is : %d \n ",emp1.code);
    printf("The Salary of employee is : %f \n ",emp1.salary);
    printf("The Name of employee is : %s \n ",emp1.name);
    emp1.code =34;

}


int main(){
    // declaring ptr and e1
    emp e1; // write emp on place of struct employee also work with help of type def
    emp *ptr;
    //pointing ptr to e1
    ptr = &e1; 
    //set the member value for e1
    ptr ->code =101;
    ptr ->salary = 11.01;
    strcpy(ptr->name,"Harry");
    return 0;
    
}