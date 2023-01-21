#include <stdio.h>

int main() {
    int a = 5;
    int i=0;
    while(i<10){
        //or just write i++ here no need of break then
        if(i!= a){
            i++;
            continue;
        }
        else{
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}