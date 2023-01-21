// to decrypt
#include <stdio.h>
void decrypt (char *c){
    char *ptr = c;
    while (*ptr != '\0'){
        *ptr = *ptr - 1;
        ptr++;
    }
}
int main() {
    char c[] = "dpnf!up!uijt!sppn"; // cant do char *c = as it is read only memory to make change in each element of arrray have to use []
    decrypt(c);
    printf("Encrypted string is : %s ",c);
    return 0;
}