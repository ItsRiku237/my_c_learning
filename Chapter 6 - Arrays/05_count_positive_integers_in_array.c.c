#include <stdio.h>
// 6. Write a program containing functions which counts the number of positive
// integers in an array.

int main()
{
    int x;
    
    int count = 0;

    printf("Enter the number of element in the array :\n");
    scanf("%d", &x);
    
    int Array[x];
     printf("Enter the element in the array :\n");
    for (int i = 0; i < x; i++)
    {

        scanf("%d", &Array[i]);
    }

    for (int i = 0; i < x; i++)
    {
        if (Array[i] > 0)
        {
            count++;
        }
    }
    printf(" Number of positive integers in array is %d\n",count);

    return 0;
}