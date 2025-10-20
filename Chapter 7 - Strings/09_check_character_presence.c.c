#include <stdio.h>
#include <string.h>
// Write a program to check whether a given character is present in a string or not.

int main()
{
    char c = 'r';
    int contains = 0;
    char str[] = "riku harry";
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            contains = 1 ;
        }
        break;
    }
    if (contains)
    {
        printf("Yes it contain the character \n");
    }
    else
    {
        printf("It does not contain the character");
    }
    
    
    return 0;
}