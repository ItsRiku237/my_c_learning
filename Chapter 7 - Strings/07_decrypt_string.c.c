#include <stdio.h>
#include <string.h>
// Write a program to decrypt a string by subtracting 1 to the ascii value of its characters.
// Write a program to decrypt the string encrypted using encrypt function in problem 6. 
int main()
{
    char str[] = "Nfsb!qj{{b!lb!mbtu!tmjtf!uvof!lib!mjzb!/";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] - 1;
    }
    printf("%s", str);
    return 0;
}