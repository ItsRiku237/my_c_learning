#include <stdio.h>

int main()
{
    //  Write a program to calculate the sum of the numbers occurring in the
    // multiplication table of 8. (consider 8 x 1 to 8 x 10).

    int i, n = 8, x, sum = 0;
    for (i = 1; i < 11; i++)
    {
        x = n * i;
        sum += x;
    }
    printf("The sum of the numbers occurring in the multiplication table of 8 is : %d", sum);
    return 0;
}