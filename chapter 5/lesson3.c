#include <stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();
int main() {
    goodmorning();
}
void goodmorning(){
    printf("Good Morning!\n");
    goodafternoon();
}
void goodafternoon(){
    printf("Good Afternoon!\n");
    goodnight();
}
void goodnight(){
    printf("Good Night!\n");
}
//get the same output as lesson2 even when goodagfternoon is called inside good morning