#include <stdio.h>
// fgetc and fputc are used to read and write a character from / to a file.
int main()
{

    FILE *ptr;
    ptr = fopen("riku.txt", "a");
    // char c = fgetc(ptr); // used to read a character from file
    // printf("%c", c);
    fputc('c', ptr);    // used to write character 'c' to the file 
    return 0;
}