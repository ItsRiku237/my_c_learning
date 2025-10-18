#include <stdio.h>

void multi_ten_times(int i)
{
    i = i * 10;
    printf("Inside function value of i is %d\n", i);
}

int main()
{
    // 3. Write a program to change the value of a variable to ten times of its current
    // value
    //  Try problem 3 using call by value and verify that it does not change the value of
    //  the said variable.
    //  ❌ Value does not change because call by value only works on a copy of the variable.
    // ✔ Call by Reference (int *num) → Modifies the actual variable
    // ✔ Call by Value (int num) → Only works on a copy, original remains unchanged
    int i = 4;
    printf("Before call the function value of i is %d\n", i);
    multi_ten_times(i);
    printf("After call the function value of i is %d\n", i);

    return 0;
}