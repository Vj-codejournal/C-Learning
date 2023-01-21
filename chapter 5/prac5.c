#include <stdio.h>

int main() {
    int a =3;
    printf("%d %d %d\n", a,++a,a++);//see copy
    // this depends on compiler how it takes the argument

//this is only when when same term a is incremented a++ then only if diff terms normal left to right see prac5other.c
    return 0;
}