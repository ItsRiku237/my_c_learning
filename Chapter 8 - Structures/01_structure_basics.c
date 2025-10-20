//                            CHAPTER 9 – STRUCTURES
#include <stdio.h>
#include <string.h>
//                                   Practice

struct employee
{
    int code;
    float salary;
    char name[10];
}; // must use semicolone
int main()
{
    struct employee e1;
    strcpy(e1.name, "Riku");
    e1.code = 78;
    e1.salary = 98.555;
    printf("%s %d %f", e1.name, e1.code, e1.salary);

    return 0;
}
