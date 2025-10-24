#include <stdio.h>
#include <stdlib.h>
// 4. Create an array dynamically capable of storing 5 integers. Now use realloc so that it can now store 10 integers.
// 6. Attempt problem 4 using calloc().
// One samall problem in this code is that last number of output is not show , other wise this program is correct.
int main()
{
    int n = 5;
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d\n", &ptr[i]);
    }
    printf("The array is : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    n = 10;
    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d\n", &ptr[i]);
    }

    printf("The array is : \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}