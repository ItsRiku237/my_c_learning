#include <stdio.h>

// Write a program to create an array of 10 integers and store multiplication table of
//  5 in it.
/*void print(int Arr[], int range)
{
    for(int i=0;i<range;i++)
    {
        printf("%d ", Arr[i]);
    }
}*/
int main()
{
    int Array[10];
    int x;
    for (int i = 0; i < 10; i++)
    {
        x = 5 * (i+1);
        Array[i]=x;
    }
    // print(Array,10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", Array[i]);
    }
    
    return 0;
}