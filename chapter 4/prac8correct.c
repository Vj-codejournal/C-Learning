#include <stdio.h>

int main() {
    int n,i;
    int prime =0 ;// this means in general it is false
    int a;
    do{
    printf("Enter a number\n");
    scanf("%d",&n);


    for (i=2 ; i<n;i++){
        if (n%i==0){
            prime=1;
            break;
        }
    }

    if(prime ==1){
        printf("this is not a prime number.\n");
    }
    else{
        printf("this is a prime number\n");
    }
    
    printf("would you like to continue? (enter 1 = yes or 2 = no)\n");
    scanf("%d", &a);
    prime=0;
    }while(a==1);           
    return 0;
}
// to use char y and n have to do this above scanf as if we use char then when taking input it take enter as a input and not y or n so use fflush(stdin)