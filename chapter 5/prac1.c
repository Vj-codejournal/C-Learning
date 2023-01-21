#include <stdio.h>
float avg(int a, int b ,int c );
int main() {
    int a,b,c; // these are different from the ones inside the function
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    printf("Enter the value of c\n");
    scanf("%d", &c);
    printf("The value of avg is %f", avg(a,b,c));
    return 0;  //each funtion have there only local variables that have no relation to main function
}



float avg (int a , int b , int c){
    float result;
    result = (float)(a+b+c )/3; // here we did typecasting convert the final into float// a b c are int so add give int as not float so even when it is given to float it still give int 
                          // so we have to type cast a+b+c to a float so there final sum become a float to do that see above line
    return result;
}