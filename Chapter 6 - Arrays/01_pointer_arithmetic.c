#include <stdio.h>

// (CHAPTER 7) ARRAYS

int main()
{
    // Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
    // to the third element where ptr is a pointer pointing to the first element of the
    // array.
    int Array[10];
    int *ptr = &Array[0];

    printf("Enter the element of Array:\n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &Array[i]);
    }
    printf("ptr[0]=%d\n", *ptr);
    printf("First element of Array : %d\n", Array[0]);
    if (*ptr == Array[0])
        printf("ptr points to the first element\n");
    // ptr++;
    // ptr++;
    printf("ptr[2]=%d\n", *ptr + 2);
    printf("Third element of Array : %d\n", Array[2]);
    if ((*ptr + 2) == Array[2])
        printf("ptr points to the third element");

    return 0;
}
