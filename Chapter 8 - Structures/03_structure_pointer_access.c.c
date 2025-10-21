#include <stdio.h>
#include <string.h>
struct employee
{
    char name[10];
    int code;
    float salary ;
};

int main(){
    struct employee e1;

    strcpy(e1.name,"Riku");
    e1.code = 78;
    e1.salary = 98000.00;

    struct employee *ptr;
    ptr = &e1; //point to e1

    struct employee e2;

    strcpy(e2.name,"Riku 1");
    e2.code = 780;
    e2.salary = 998000.00;

    struct employee *ptr1;
    ptr1 = &e2; //point to e2

    printf("%s, %d ,%f\n",(*ptr).name , (*ptr).code,(*ptr).salary);
    printf("%s, %d ,%f\n",ptr1->name , ptr1->code, ptr1->salary);
    return 0;
}