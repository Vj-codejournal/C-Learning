#include <stdio.h>
void change(int a);


int main() {
    int b = 77;
    printf("The value of b before change is %d\n",b);
    change(b);
    printf("The value of b after change is %d\n",b);
    //if we actually want to change value of b then have to use pointes.

    return 0;
}

void change(int a){
    a=77;
}