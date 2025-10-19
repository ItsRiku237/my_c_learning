#include <stdio.h>
// Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7
//  and 9 respectively
int main()
{
    int table[3][10];
    int number[] = {2, 7, 9};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            table[i][j] = number[i] * (j + 1);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Multiplication table of %d\n", number[i]);
        for (int j = 0; j < 10; j++)
        {
            printf("%d X %d = %d\n", number[i], j + 1, table[i][j]);
        }
        printf("\n");
    }

    // below code is trail version of code
    // int arr[30];
    // for (int i = 0; i < 10; i++)
    // {
    //         arr[i]  = 2 * (i+1);
    //     }
    //     for (int i = 0 ; i < 10 ; i++)
    //     {
    //         arr[i+10] = 7 * (i+1);
    //     }
    //     for (int i = 0; i < 10; i++)
    //     {
    //         arr[i+20] = 9 * (i+1);
    //     }
    //     for (int i = 0; i < 30; i++)
    //     {
    //         printf("%d\n", arr[i]);
    //     }

    return 0;
}