#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = {"Riku"};
    char target[20];
    char s1[44] = "Riku";
    char s2[44] = " Bhai";
    strcpy(target, st);
    printf("%s %s\n", st, target);
    printf("%d \n", strlen(st));
    printf("%d\n", strlen(target));
    strcat(s1, s2);
    printf("%s\n ", s1);
    int a = strcmp("riku", "sahu");
    int b = strcmp("riku", "Sahu");
    int c = strcmp("sahu", "riku");
    int d = strcmp("d", "j");
    printf("%d %d %d %d ", a,b,c,d);

    return 0;
}