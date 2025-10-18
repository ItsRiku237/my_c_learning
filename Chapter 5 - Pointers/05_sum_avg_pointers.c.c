#include <stdio.h>

int sum(int *x, int *y)
{
    return *x + *y;
}
float avg(int *x, int *y)
{
    return (*x + *y) / 2;
}
int main()
{
    // Write a program using a function which calculates the sum and average of two
    // numbers. Use pointers and print the values of sum and average in main().
    int i = 5, j = 7;
    printf("sum of two number %d and %d is %d\n", i, j, sum(&i, &j));
    printf("Average of two number %d and %d is %.2f \n", i, j, avg(&i, &j));
    return 0;
}