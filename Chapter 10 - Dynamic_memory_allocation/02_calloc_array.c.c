#include <stdio.h>
#include <stdlib.h>
// Quick Quiz: Write a program to create an array of size n using calloc where n is an integer entered by the user.
int main()
{
    int n;
    int *ptr;
    scanf("%d", &n);

    // ptr = (int*) calloc(30, sizeof (int))
    ptr = (int *)calloc(n, sizeof(int));

    ptr[0] = 5;
    printf("%d\n", ptr[0]);

    return 0;
}