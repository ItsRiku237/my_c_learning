#include <stdio.h>
// Write a program to generate multiplication table of a given number in text format. Make sure that the file is readable and well formatted.
// This code is not working properly. Out put is not show in Table.txt file.
int main()
{
    FILE *fptr;
    int num = 5;
    fptr = fopen("Table.txt", "w");
    for (int i = 0; i < 10; i++)
    {
        fprintf(fptr, "%d", num*(i + 1));
        fprintf(fptr, "%s", '\n');
    }

    return 0;
}