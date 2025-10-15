#include <stdio.h>

int main()
{
    // Write a pogram to sum first ten natural numbers using while loop.
    // int x = 1, sum=0;
    // while (x < 11)
    // {
    //     sum += x;
    //     x++;
    // }
    //  printf("sum first ten natural numbers: %d", sum);

    int i = 1, sum = 0;
    do
    {
        sum += i;
        i++;
    } while (i < 11);

    return 0;
}