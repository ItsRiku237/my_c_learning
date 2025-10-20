#include <stdio.h>
#include <string.h>
// Write a program to count the occurrence of a given character in a string.#include <stdio.h>

int main()
{
    char c = 'r';
    int count = 0;
    char str[] = "riku harry";
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            count++ ;
        }
    }
    printf("%d", count);
    return 0;
}