//                                    CHAPTER 11 – DYNAMIC MEMORY ALLOCATION
#include <stdio.h>
#include <stdlib.h>
// Quick Quiz: Write a program to create a dynamic array of 5 floats using malloc().
int main()
{
    float n = 5;
    float *ptr;
    // ptr = (int*)malloc(30* sizeof (int))
    ptr = (float *) malloc(n * sizeof(float));
    ptr[0] = 56.7634;
    ptr[1] = 6.7634;
    ptr[2] = 46.7634;
    ptr[3] = 58.7634;
    ptr[4] = 89.7694;

    printf("%.2f\n", ptr[0]);
    printf("%.2f\n", ptr[1]);
    printf("%.2f\n", ptr[2]);
    printf("%.2f\n", ptr[3]);
    printf("%.2f\n", ptr[4]);

    return 0;
}
