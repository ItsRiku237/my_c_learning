#include <stdio.h>
// Write a program to read a text file character by character and write its content
// twice in separate file.
int main()
{
    char ch;
    FILE *ptr;
    FILE *ptr2;

    ptr = fopen("riku.txt", "r");
    ptr2 = fopen("riku2.txt", "a");
    while (1)
    {
        ch = fgetc(ptr);
        if (ch == EOF)
        {
            break;
        }
        else
        {
            fprintf(ptr2, "%c", ch);
            fprintf(ptr2, "%c", ch);
            printf("%c", ch);
        }
    }

    return 0;
}