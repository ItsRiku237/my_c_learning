#include <stdio.h>
// Write a program to read three integers from a file.
int main()
{
    FILE *fptr;
    fptr = fopen("riku.txt", "r");
    int num1, num2, num3;
    fscanf(fptr, "%d %d %d", &num1, &num2, &num3);
    printf("The value of num is %d %d %d .\n", num1, num2, num3);   

    fclose(fptr);

    return 0;
}