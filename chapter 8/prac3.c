#include<stdio.h>
void slice(char *st, int m, int n){
    int i = 0;
     while((m+i)<n){
         st[i] = st[i+m];
         i++;
     }
     st[i] = '\0'; // last i++ make i 5so \0 store in 5 so a r r y s \0
                                                         //0 1 2 3 4  5
 }

int main(){
    char st[] = "Harrysfsdfsdf";
    slice(st, 1, 6);
    printf("%s", st);
    return 0;
}