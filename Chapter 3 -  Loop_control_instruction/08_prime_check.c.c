#include <stdio.h>

int main()
{
    //  Write a program to check whether a given number is prime or not using loops.
    int n, prime = 1;
    printf("Enter a number:\n");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("%d is not a prime number ", n);
        return 0;
    }

    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime)
    {
        printf("%d is a prime number", n);
    }
    else
        printf("%d is not a prime no", n);

    return 0;
}