#include <stdio.h>
// EOF : END OF FILE
int main()
{
    char ch;
    FILE *ptr;
    ptr = fopen("riku.txt", "r");
    // when all the content of a file has been read break the loop! 
    while (1)
    {
        ch = fgetc(ptr);
        printf("%c", ch);
        if (ch == EOF)
        {
            break;
        }
    }

    return 0;
}