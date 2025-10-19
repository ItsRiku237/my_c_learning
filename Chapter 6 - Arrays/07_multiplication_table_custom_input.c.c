#include <stdio.h>
// 7. Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7
// and 9 respectively.
// Repeat problem 7 for a custom input given by the user
int main(){
    int table[3][10];
    int number[3] ;
    printf("Enter the  three multiplication table number:\n");
    for (int  i = 0; i < 3; i++)
    {
        scanf("%d", &number[i]);
    
    }
    
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

    return 0;
}