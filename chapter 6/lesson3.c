//call by value
#include<stdio.h>
int sum (int a, int b);
int main(){
    int x=4, y=7;
    printf("The value of x and y is %d and %d\n", x, y);
    printf("The value of 4+7 is %d\n", sum(x, y));
    printf("The value of x and y after function call is %d and %d\n", x, y);
    return 0;
}
int sum (int a, int b){
    int c;
    c = a + b;// this a and b are only copies of x and y  in call by value so changing them dont change the value of x and y 
    // and c written before changing a and b so sum also same
    // we can change variables of main by help of a function whitout a pointer
    b =3434;
    a = 23432;  
    return c;
}