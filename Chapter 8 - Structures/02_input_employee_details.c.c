#include <stdio.h>
#include <string.h>
//                                   Practice
// Write a program to store the details of 3 employees from user defined data.Use the structure declared above.
// This code is not working properly.
struct employee
{
    int code;
    float salary;
    char name[10];
}; // must use semicolone
int main()
{
    struct employee e1, e2, e3;
    printf("Enter the name of the employee :\n");
    scanf("%s", e1.name);

    printf("Enter the code of employee :\n");
    scanf("%d", e1.code);

    printf("Enter the salary of employee :\n");
    scanf("%f", e1.salary);

    printf("Enter the name of the employee :\n");
    scanf("%s", e2.name);

    printf("Enter the code of employee :\n");
    scanf("%d", e2.code);

    printf("Enter the salary of employee :\n");
    scanf("%f", e2.salary);
    printf("Enter the name of the employee :\n");
    scanf("%s", e3.name);

    printf("Enter the code of employee :\n");
    scanf("%d", e3.code);

    printf("Enter the salary of employee :\n");
    scanf("%f", e3.salary);

    printf("%s %d %f", e1.name, e1.code, e1.salary);

    return 0;
}