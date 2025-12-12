// inserting a string in astring.
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = {'a', 'b', 'c', 'd', '\0'};
    char s2[] = {'p', 'q', '\0'};
    // a,b,p,q,c,d
    int m = strlen(s1);
    int n = strlen(s2);
    char s3[m + n + 1];
    int pos = 3; // insert after 2nd index (0-based)
    int ind = 0, j = 0, t = 0;

    // for (int i = 0; i < pos - 1; i++)
    // {
    //     s3[ind] = s1[i];
    //     ind++;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     s3[ind] = s2[i];
    //     ind++;
    // }
    // for (int i = pos - 1; i < m; i++)
    // {
    //     s3[ind] = s1[i];
    //     ind++;
    // }
    // // Null terminate
    // s3[ind] = '\0';

    // for (int i = 0; i < m + n; i++)
    // {
    //     printf("%c ", s3[i]);
    // }

    for (int i = 0; i < m + n; i++)
    {
        if (i < pos)
        {
            s3[i] = s1[j++];
        }
        else if (i >= pos && i < pos + n)
        {
            s3[i] = s2[t++];
        }
        else
        {
            s3[i] = s1[j++];
        }
    }
    s3[m + n] = '\0'; // Null-terminate the string

    for (int i = 0; i < m + n; i++)
    {
        printf("%c ", s3[i]);
    }

    return 0;
}