#include <stdio.h>

int main() {
    int n =5, i;
    int a=1,c;
    
    for (i=1;i<=n;i++){
    
        for(c=1;c<=(2*a - 1);c++){ // before here was  i so when i++ happen upper loop disturbed so take a different variable here
            printf("*");
        }
        c=1;
    printf("\n");
    if (a<=n){
    a++;
    }
    

    }
    return 0;
}
