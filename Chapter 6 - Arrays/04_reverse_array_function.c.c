#include <stdio.h>
// 5. Write a program conta-ining a function which reverses the array passed to it.
int rev(int arr[])
{
    int start = 0, end = 3 - 1, temp;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    int Array[] = {1, 2, 3};
    printf("print Array befor reverse :\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", Array[i]);
    }
    rev(Array);
    printf("print Array after reverse :\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", Array[i]);
    }

    return 0;
}