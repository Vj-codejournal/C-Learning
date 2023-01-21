#include <stdio.h>
void counter(int *arr, int n){
    int a=0;
    for (int i=0;i<n; i++){
        if (arr[i]>0){
            a++;
        }
    }
    printf("There are %d positive integers in this array", a);
}


int main() {
    int arr []={2,54,654,24,-2,45,-6,-4,-45};
    counter (arr, 9);
    return 0;
}