#include <stdio.h>

int address(int* ptr)
{
    printf("Value of ptr is %d\n",ptr);
    printf("Address of x is %d \n", ptr);
    return 5;
}

int main()
{
    //    Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
    // a function and print its address. Are these addresses same? Why?
    int i = 7;
    int* ptr = &i ;

    printf("Address of i is %u\n", &i);
    address(ptr);
    return 0;
}