//***** learn to return two things from same function
//or how to make a void function return value

#include <stdio.h>
void sumAndAvg(int a,int b, int *sum,float *avg){
    *sum = a+b;
    *avg = (float)(*sum)/2; //so it edited there values 
}



int main() {
    int i,j,sum;
    float avg;
    printf("Enter the first number\n");
    scanf("%d",&i);
    printf("Enter the second number\n");
    scanf("%d",&j);

    sumAndAvg(i,j,&sum,&avg); //by this make the function change sum and avg
    printf("The value of sum is %d \n" , sum);
    printf("The value of avg is %f \n ", avg);
    return 0;
}