#include <stdio.h>

/*4. Write a program to calculate simple interest for a set of values representing      
principal, number of years and rate of interest. */

int main(){
    int p, y, i ,si ;

    printf("Enter principle: ");
    scanf("%d", &p);

    printf("Enter no of Year :");
    scanf("%d", &y);

    printf("Enter rate of intrest:");
    scanf("%d" , &i);
    si = (p*y*i)/100;
    printf("Simple intrest is = %d", si ); 
    return 0;
}