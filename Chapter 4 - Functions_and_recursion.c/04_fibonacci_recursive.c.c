#include <stdio.h>
int Fibo(int n)
{
    // 0 1 1 2 3 5 8 13 21 .......
    // n = (n-1)+(n-2)
    /*if (n == 0 || n == 1)
    {
        return n;
    }*/

    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
        return Fibo(n - 1) + Fibo(n - 2);
}

int main()
{
    // Write a program using recursion to calculate nth element of Fibonacci series.
    int n;
    printf("Fabonacci series \n");
    printf("Enter the number of term to display: \n");
    scanf("%d", &n);
    printf("The first %d term of Fabonacci series are :\n", n);

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", Fibo(i));
    }

    return 0;
}