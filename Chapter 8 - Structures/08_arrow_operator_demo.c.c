#include <stdio.h>
#include <string.h>
// Write a program to illustrate the use of arrow operator → in C.

typedef struct emp
{
    float score;
    int salary;
} employee; // must use semicolone
int main()
{
    employee e1;
    // e1.score = 55.3;
    // e1.salary = 990000;

    employee *ptr = &e1;

    ptr->score = 55.3;
    ptr->salary = 990000;

    printf("The value of salary is %d and the value of score is %.2f .", ptr->salary, ptr->score);

    return 0;
}