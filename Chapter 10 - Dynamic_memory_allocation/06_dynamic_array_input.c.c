#include <stdio.h>
#include <stdlib.h>
// Write a program to dynamically create an array of size 6 capable of storing 6  integers.
// Use the array in problem 1 to store 6 integers entered by the user.
int main()
{
    int n = 5;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d\n", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}