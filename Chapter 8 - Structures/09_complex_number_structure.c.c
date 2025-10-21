#include <stdio.h>
// Write a program with a structure representing a complex number.
typedef struct c
{
    int Real;
    int Imaginary ;
}complex;

int main(){
    complex c = {2,3};
    printf("The value of complex number is %d + %di .",c.Real ,c.Imaginary);
    return 0;
}