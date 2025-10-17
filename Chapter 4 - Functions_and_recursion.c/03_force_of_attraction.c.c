#include <stdio.h>
float Force(int x)
{
    return x * 9.8 ;
}
int main()
{
    // Write a function to calculate force of attraction on
    //  a body of mass ‘m’ exerted by earth. Consider g = 9.8m/s2.
    int mass;
    float F;
    printf("Enter the  mass of the object :\n");
    scanf("%d", &mass);

    F = Force(mass);
    printf("force of attraction on a body of mass %d exerted by earth is:\n%.2f N\n", mass, F);
    return 0;
}