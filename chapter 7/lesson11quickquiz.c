#include<stdio.h>

void display(int ptr[], int n, int m){ 
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("{%d}\n",ptr[i][j]);
        }
    }
}

int main(){
    int a=2,b=3;
    int arr[2][3];
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            printf("Enter the marks of student %d in subject %d\n", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    display(arr, a ,b);
    return 0;
}