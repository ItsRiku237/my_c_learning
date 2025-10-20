#include <stdio.h>
// Write your own version of strcpy function from <string.h>

// This code is wrong not perfectly correct output is RIku RIkuo«v≡↓@

int mystrlen(char *str)
{
    int i = 0;

    int count;
    char c = str[i];
    while (c != '\0')
    {
        i++;
        c = str[i];
    }
    count = i;
    return count;
}

void mystrcpy(char target[], char source[])
{
    for (int i = 0; i < mystrlen(source); i++)
    {
        target[i] = source[i];
    }
    target[mystrlen(source)];
}
int main()
{
    char source[] = "RIku";
    char target[30];
    mystrcpy(target, source);
    printf("%s %s", source, target);
    return 0;
}