#include <stdio.h>

int main()
{
    char A[] = {'a', 'b', 'c', 'd', 'e', 'f','\0'};
    char B[] = {'c', 'd', 'e','\0'};

    int m=0, n=0 ;
    while(A[m]!='\0')m++;
    while(B[n]!='\0')n++;
    
    // int m = sizeof(A) / sizeof(A[0]);
    // int n = sizeof(B) / sizeof(B[0]);
    
    int found =0;
    int index;

    for (int i = 0; i <= m - n; i++)
    {
        // if(A[i]==B[0]){
        int j;
            for (j = 0; j < n; j++)
            {
                if (A[i+j] != B[j])
                {
                    break;
                }
        //         if (A[i+j] == B[j])
        //         {
        //    ctr++;
        //         }
            }
            if (j==n)
            {
                found=1;
                index=i;
                break;
            }
            
            
        // }
    }
    if (found)
    {
        printf("A is the substring of B . it found at index %d .",index);
    }
    else
    {
        printf("A is the not a substring of B .");
    }

    return 0;
}