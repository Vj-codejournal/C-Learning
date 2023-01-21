#include <stdio.h>
typedef struct complex{
    int real;
    int imag;
}comp;

void display(comp c){
    printf("The value of real part is %d\n", c.real);
    printf("The value of imag part is %d\n",c.imag);
}
int main() {
    comp cnums[5];  // using comp as a type like a int we made a array cnums like we so int arr[]
    for(int i=0; i<5;i++){
        printf("Enter the real value of %d num\n", i+1);
        scanf("%d", &cnums[i].real);
        printf("Enter the imag value of %d num\n", i+1);
        scanf("%d", &cnums[i].imag);
    }
    for(int i=0; i<5;i++){
       display(cnums[i]);
    }
    return 0;
}