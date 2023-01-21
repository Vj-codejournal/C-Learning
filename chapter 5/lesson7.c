#include <stdio.h>
int function (int x);
int main() {
    int a = 5;
    printf ("The value of factorial %d is %d", a ,factorial(a));
     // this factorial will call the function where a is x
    return 0;
}


int factorial(int x ){
    printf("calling factorial (%d)\n",x); // to check the loop ends properly can use prints like this
    if (x==0 || x==1){ //this is base condition it stops the function from calling itself again // as factorial of 0 and 1 is 1 so return 1 
        return 1;// if this is true  it will end here and return to main function  
    }
    else{
        return factorial(x-1)*x;// it is the formula of factorial
    }  // it is recurssion as function factorial has factorial called inside of it
}