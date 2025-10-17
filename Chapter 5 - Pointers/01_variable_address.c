#include <stdio.h>

// POINTERS(CHAPTER 6)


int main()
{
    // Write a program to print the address of a variable. Use this address to get the
    // value of the variable
    int x = 72;
    int *y = &x; // y is a pointer pointing to x
    int **z = &y;
    printf("The address of x is %p\n", &x);
    printf("The address of x is %u\n", &x);
    printf("The address of x is %d\n", y);
    printf("The value at address y is %d \n", *y);
    printf("The value of x is %d\n ", *y);
    return 0;
}
