//                                      CHAPTER 10 – FILE I/O
#include <stdio.h>

int main()
{
    // FILE *fptr;
    // fptr = fopen("harry.txt", "w");
    // int num = 432;
    // fprintf(fptr, "%d", num);
    // fclose(fptr);

    FILE *fptr;
    fptr = fopen("riku.txt", "r");
    int num;
    fscanf(fptr, "%d", &num);
    printf("The value of num is %d .\n", num);
    fscanf(fptr, "%d", &num);
    printf("The value of num is %d .\n", num);
    fclose(fptr);

    return 0;
}
