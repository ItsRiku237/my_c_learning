#include <stdio.h>

int main(){
 // Write a program to print the value of a variable i by using “pointer to pointer” type 
// of variable.
int i = 4 ;
int* j = &i ;
int** k = &j ;

printf("value of i is %d\n",i);
printf("Value of i (using *j) is %d\n",*j);
printf("Value of i (using **j) is %d\n", **k );

    return 0;
}