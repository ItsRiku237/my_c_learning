#include <stdio.h>
#include <stdlib.h>
// Quick Quiz: calloc
int main()
{
    int n = 5;
    int *ptr;

    // ptr = (int*) calloc(30, sizeof (int))
    ptr = (int *)malloc(n * sizeof(int));

    ptr[0] = 5;
    // free(ptr); when we put free DMA above printf then it free the memory of ptr and give garbage value .
    printf("%d\n", ptr[0]);

    ptr = (int *)realloc(ptr, 10 * sizeof(int)); //now it store 10 integer insted of 5 . 
    return 0;
}