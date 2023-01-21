#include <stdio.h>
int present(char st[], char c){
    char *ptr =st;
    int count =0;
    while (*ptr != '\0'){
        if (*ptr == c){
            count ++;
            break; //  jaha pe bhi mila waha ruk jayga
            
        }
        ptr++;
    } 
    return count;
}
int main() {
    char st[] = "Harry";
    int b = present(st, 'r');
    if (b == 1){
        printf("given character is present");
    }
    else{
        printf("given character is not present");
    }
    return 0;
}