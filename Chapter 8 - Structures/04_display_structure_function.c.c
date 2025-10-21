#include <stdio.h>
#include <string.h>
//        Quick Quiz: Complete this show function to display the content of employee.

struct employee
{
    int code;
    float salary;
    char name[10];
}; // must use semicolone

void show(struct employee e); // Function prototype

void show(struct employee e)
{
    printf("%s %d %f", e.name, e.code, e.salary);
}

int main()
{
    struct employee e1;
    strcpy(e1.name, "Riku");
    e1.code = 78;
    e1.salary = 98.555;
    show(e1);

    return 0;
}