#include <stdio.h>
#include <string.h>
typedef struct employee
{
    char name[10];
    int code;
    float salary;
}emp ;

int main(){
    // struct employee e1;
    emp e1 ; //typedef struct employee emp ;

    // typedef int Riku;
    // Riku a=78;
    // printf("%d",a);

    strcpy(e1.name, "Riku");
    e1.code = 78;
    e1.salary = 98.555;
    printf("%s %d %f", e1.name, e1.code, e1.salary);
    
    return 0;
}