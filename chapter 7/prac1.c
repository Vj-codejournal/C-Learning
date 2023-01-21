#include <stdio.h>

int main() {
    int arr[10] ={3,5,74,76,54,43,63,2,64,6};
    int *ptr = &arr[0];
    // or int *ptr =arr
    int *a= ptr +2;
    printf("%d", *a);
    return 0;
}