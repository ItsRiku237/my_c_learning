#include <stdio.h>
// Quick Quiz: Modify the program above to check whether the file exists or not before opening the file.
int main()
{
    FILE *fptr;
    fptr = fopen("riku.txt", "r");

    if (fptr == NULL)
    {
        printf("The file does not exist Sorry!");
    }
    else
    {
        int num;
        fscanf(fptr, "%d", &num);
        printf("The value of num is %d\n", num);
        fscanf(fptr, "%d", &num);
        printf("The value of num is %d\n", num);
        fclose(fptr);
    }

    return 0;
}