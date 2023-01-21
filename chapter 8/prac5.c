#include <stdio.h>
void encrypt (char *c){
    char *ptr = c;
    while (*ptr != '\0'){
        *ptr = *ptr + 1;
        ptr++;
    }
}
int main() {
    char c[] = "come to this room"; // cant do char *c = as it is read only memory to make change in each element of arrray have to use []
    encrypt(c);
    printf("Encrypted string is : %s ",c);
    return 0;
}

// we get a output that is encrypted it is just next ascii value of each element
// it is a secret message
// we increase the ascii value to next and change each char value
// we do +1 it go to next ascii value to that character