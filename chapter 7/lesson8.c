#include <stdio.h>

void printArray(int *ptr, int n)// take arrays 1st address and its size 
{for(int i=0; i<n; i++){
         printf("The value of element %d is %d\n", i+1, *(ptr+i)); // as i increase and go to next address and get its value as *
     }
}
int main() {
    int arr[] = {1,2,3543,34,3,645,23};
    printArray(arr, 7);  // see prev chap arr and &arr[0] same thing so it is sending address so we chn change values of arr with the function
    
    return 0;
}