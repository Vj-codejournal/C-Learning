#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int*) malloc(6 * sizeof(int)); //created space for 6 int of 4 byte each
                                            // not write 4 direct as size of int can vary
    for(int i=0; i<6;i++){
        printf("Enter the value of %d element: \n", i); 
        scanf("%d", &ptr[i]); //assigned it to the new dynamic memory made array
    }

    for(int i=0; i<6;i++){
        printf("The value of %d element is: %d\n", i, ptr[i]);  
    }
    return 0;                    
}