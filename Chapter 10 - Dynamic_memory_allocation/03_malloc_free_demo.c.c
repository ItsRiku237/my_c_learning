#include <stdio.h>
#include <stdlib.h>
// Quick Quiz: Write a program to create an array of size n using calloc where n is an integer entered by the user.
int main()
{
    int n;
    int *ptr;
    scanf("%d", &n);

    // ptr = (int*) calloc(30, sizeof (int))
    ptr = (int *)malloc(n * sizeof(int));

    ptr[0] = 5;
    // free(ptr); when we put free DMA above printf then it free the memory of ptr and give garbage value .
    printf("%d\n", ptr[0]);
    free(ptr);
    return 0;
}