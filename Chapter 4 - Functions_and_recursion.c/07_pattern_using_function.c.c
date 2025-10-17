#include <stdio.h>
int star(int x)
{
    return ((2 * x) - 1);
}

int main()
{
    // Write a program using function to print the following pattern (first n lines)
    // *             --> 1
    // * * *         --> 3
    // * * * * *     --> 5
    // Logic        s = (2n-1)

    int x , n ;
    printf("Enter the number of line print :\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        x = star(i + 1);
        for (int j = 0; j < x; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}