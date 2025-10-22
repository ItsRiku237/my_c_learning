#include <stdio.h>
// Write a program to modify a file containing an integer to double its value.
int main()
{
    FILE *ptr;
    ptr = fopen("int.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    fclose(ptr);

    ptr = fopen("int.txt", "w");
    fprintf(ptr, "%d", 2 * num);
    fclose(ptr);

    return 0;
}