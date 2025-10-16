#include <stdio.h>

//   FUNCTION (CHAPTER 5)


float Average(float x, float y, float z)
{
    return (x + y + z) / 3;
}
int main()
{
    //  Write a program using function to find average of three numbers.
    float a = 4.56, b = 8.5, c = 6.98, d;
    d = Average(a, b, c);
    printf("Average of %2f,%2f,%2f is %2f\n", a, b, c, d);
    return 0;
}
