#include <stdio.h>
#include <string.h>

struct employee{ // now it is a custom data type 
    int code;
    float salary;
    char name[10];

};
int main() {
    struct  employee e1;
    e1.code = 100;// " . " is a member operator it does employee e1 ka code set kar do 100
    e1.salary = 34.454;
    //e1.name= "harry"   // it is a arr cant write direct like above
    strcpy(e1.name , "Harry");// have to use this to fill in the array
          //target, source
    
    printf("%d\n",e1.code);
    printf("%f\n",e1.salary);
    printf("%s\n",e1.name);
    return 0;
}