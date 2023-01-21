#include <stdio.h>

int sum(int a,int b );  //function prototype declaration
//this means sum is a function which takes a and b as input and return an integer


int main() {
    int c;
    c = sum(2,5); // here 2 and 5 are argument // now this not void it is int it has value give that to c
    printf("The value of c is %d\n",c);
    return 0;
}

int sum (int a , int b){ // if i make a var c here in this function it is different than in main()
    int result;      // a and b are parameters
    result = a + b;
    return result;

}