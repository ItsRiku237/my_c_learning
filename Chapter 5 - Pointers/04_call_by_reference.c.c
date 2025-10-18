#include <stdio.h>

void update_value(int *a)
{
    printf("Inside function - before update x = %d\n", *a);
    *a = *a + 10;
    printf("Inside function - after update x = %d\n", *a);
}
int main()
{
    // Write a function and pass the value by reference
    int x = 5;
    printf("Before function call x = %d\n", x);
    update_value(&x);
    printf("After function call x = %d\n", x);

    return 0;
}