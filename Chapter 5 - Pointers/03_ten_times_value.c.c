#include <stdio.h>
void change_value_to_10_times(int* x){
    *x = *x * 10 ;
}
int main(){
    // Write a program to change the value of a variable to ten times of its current 
// value.
int a = 5 ;
printf("The value of a is %d\n", a );
change_value_to_10_times(&a);
printf("The value of a is %d\n" ,a);
    return 0;
}