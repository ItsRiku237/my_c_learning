#include <stdio.h>
// Create an array of 5 complex numbers created in Problem 5 and display them with the help of a display function.
//  The values must be taken as an input from the user.
typedef struct c
{
    int Real;
    int Imaginary;
} complex;

void display(complex c);

void display(complex c)
{
    printf("The value of complex number is %d + %di .\n", c.Real, c.Imaginary);
}

int main()
{
   complex carr[5];
    for (int i = 0; i < 5; i++)
    {   
        printf("Enter the real number:\n");
        scanf("%d\n", &carr[i].Real );
        printf("Enter the complex number:\n");
        scanf("%d\n", &carr[i].Imaginary);
        display(carr[i]);
    }
    return 0;
}