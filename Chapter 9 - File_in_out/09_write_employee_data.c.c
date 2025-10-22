#include <stdio.h>
// Take name and salary of two employees as input from the user and write them to
// a text file in the following format:
// i. Name1, 3300
// ii. Name2, 7700
int main()
{
    FILE *ptr;
    ptr = fopen("Salary.txt", "w");
    char Name1[34], Name2[34];
    int Salary1, Salary2;
    printf("Enter the employee1 Name:\n");
    scanf("%s", Name1);
    printf("Enter the employee1 Salary:\n");
    scanf("%d", &Salary1);

    printf("Enter the employee2 Name:\n");
    scanf("%s", Name2);
    printf("Enter the employee2 Salary:\n");
    scanf("%d", &Salary2);

    fprintf(ptr, "%s", Name1);
    fprintf(ptr, "%s ", ",");
    fprintf(ptr, "%d", Salary1);
    fprintf(ptr, "%c", '\n');

    fprintf(ptr, "%s", Name2);
    fprintf(ptr, "%s ", ",");  
    fprintf(ptr, "%d", Salary2);
    fprintf(ptr, "%c", '\n');
    return 0;
}