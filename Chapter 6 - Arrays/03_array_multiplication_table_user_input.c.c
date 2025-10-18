#include <stdio.h>
// 3. Write a program to create an array of 10 integers and store multiplication table of 
// 5 in it
// Repeat problem 3 for a general input provided by the user using scanf.
// This program is not working properly (not come output).
int main()
{
    int Array[10] , num ;
    scanf("%d", &num );
    for (int i =0; i < 10; i++)
    {
        Array[i]= num * (i+1) ;
    }
   
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", Array[i]);
    }

    return 0;
}
