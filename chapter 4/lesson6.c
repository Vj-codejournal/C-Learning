#include <stdio.h>

int main() {
    int i = 5;
    printf("The value of i++ is %d\n", i++);// here it will print 5 and not 6 as i then ++ so first print i then increment it so now in next printf i already incremented so print 6.
                                            // if we want 6 in above do ++i this means increment then print
    printf("The value of i is %d\n", i);

    int a=5;
    printf("The value of a++ is %d\n", ++a);

    a+=10;
    printf("the value of a is %d",a);
    return 0;
}