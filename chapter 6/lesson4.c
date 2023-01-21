// call by refrence
#include<stdio.h>
void wrong_swap(int a, int b);//this is call by value dont change values
void swap(int *a, int *b); // *a as it takes there address

int main(){
    int x=3, y=4;
    printf("The value of x and y before swap is %d and %d\n", x, y);
    //wrong_swap(x, y); // will not work due to call by value
    swap(&x, &y); // this is address store in *a
    printf("The value of x and y after swap is %d and %d\n", x, y);

    return 0;
}

void wrong_swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap(int *a, int *b){
    int temp;
    temp = *a;// we have taken address from above  a= &x so *a is value of address as it is *(&x) so now can change it 
    *a = *b;
    *b = temp;
}