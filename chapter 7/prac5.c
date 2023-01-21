
//without using function
#include <stdio.h>

int main() {
    int mulTable[3][10];
    for (int i=0;i<10;i++){
        mulTable[0][i] = 2*(i+1); 
        
    }

    for (int i=0;i<10;i++){
        printf("2 X %d = %d\n",i+1,mulTable[0][i]);
    }

    for (int i=0;i<10;i++){
        mulTable[1][i] = 7*(i+1); 
        
    }

    for (int i=0;i<10;i++){
        printf("7 X %d = %d\n",i+1,mulTable[1][i]);
    }
    for (int i=0;i<10;i++){
        mulTable[2][i] = 9*(i+1); 
        
    }

    for (int i=0;i<10;i++){
        printf("9 X %d = %d\n",i+1,mulTable[2][i]);
    }
    return 0;
}