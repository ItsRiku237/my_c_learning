#include <stdio.h>
/*Write a program to find whether a year entered by the user is a leap year or not. 
Take year as an input from the user. */
int main(){
int year ;

printf("Enter a Year:");
scanf("%d", &year);

if ((year%400==0) || (year%4==0 && year%100 !=0))
{
    printf("Enter year is a leap year");
}
else
printf("Enter year is not a leap year");

    return 0;
}
