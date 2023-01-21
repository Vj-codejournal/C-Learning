#include <stdio.h>

int main() {
    FILE *ptr;
    int num;
    ptr = fopen("intfile.txt","r");
    fscanf(ptr, "%d", &num);
    printf("%d", num);// if 43 and 88 2 int in that text file fscanf take one it is just like when we use scanf for input 
    //to read 88 have to put fscanf again // jo keyboard se input deta wo file se aay rahe hi ab
    int num2;
    fscanf(ptr, "%d", &num2);
    printf("%d", num2);
    fclose(ptr); //should close a file
    return 0;
}