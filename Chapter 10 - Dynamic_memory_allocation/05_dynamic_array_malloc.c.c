#include <stdio.h>
#include <stdlib.h>
// Write a program to dynamically create an array of size 6 capable of storing 6  integers.
int main()
{
    int n = 6;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    ptr[0] = 5;
    printf("%d\n", ptr[0]);

    return 0;
}