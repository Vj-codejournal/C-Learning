#include <stdio.h>  //11:00:00
#include <string.h>

int main() {
    char st1[34];
    char st2[34];
    printf("Enter the value of first string\n");
    scanf("%s", st1);
    printf("Enter the value of second string character by character\n");
    fflush(stdin);// there where 2 scanf together so after 1st scanf when we enter the next scanf takes that enter as a value.
    // so to solve this we use fflush // fflush will flush/ clear any values stored





    char c;
    // by using %c we have to fill the array
    //scanf("%c", &c); no use here as fflush in the loop will clear it and we will miss the first character
    int i =0;
    while (c != '\n'){// \n is a enter
        fflush(stdin);
        scanf("%c", &c);
        st2[i] = c;
        i++;

    }
    st2[i-1] = '\0';

    printf("The value of st1 is %s \n",st1);
    printf("The value of st2 is %s \n",st2);
    printf("strcmp for these strings return %d", strcmp(st1,st2));
    // this strcmp will not give 0 as in st2 there is a \n "enter" after the input and i++ already happen last time when loop end so one extra have to remove
    // so do i-1 in \0 to remove that extra enter \0 will replace it now
    return 0;
}