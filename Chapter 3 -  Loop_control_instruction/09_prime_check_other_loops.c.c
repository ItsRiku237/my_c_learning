#include <stdio.h>

// 11. Implement 10 using other types of loops. 

int main()
{
    int n, i = 2, prime = 1;

    printf("Enter a no:\n");
    scanf("%d", &n);
    if (n < 2)
    {
        printf("Enter no %d is not a prime no.", n);
    }
    else{
    while (i <= n / 2)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
        i++;
    }
    if (prime)
    {
        printf("%d is a prime no.", n);
    }
    else
        printf("%d is not a prime no.", n);
    }
    return 0;
}