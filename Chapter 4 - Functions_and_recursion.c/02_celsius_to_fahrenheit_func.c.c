#include <stdio.h>

float fahrenheit(int x)
{
    // C->F F = (c*9/5)+32
    return (x * 9.0 / 5) + 32;
}
int main()
{
    //   Write a function to convert Celsius temperature into Fahrenheit.
    int celsius;
    printf("Enter the celsius:\n");
    scanf("%d", &celsius);

    printf("Fahrenheit is: %.2f ", fahrenheit(celsius));
    return 0;
}