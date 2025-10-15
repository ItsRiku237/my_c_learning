#include <stdio.h>

int main(){
    // Write a program to print multiplication table of 10 in reversed order.
    int n=10 ,i ,x;

    for ( i = 10 ; i > n; i--)
    {
       x=i*n;
       printf("%d X %d = %d\n",n ,i,x);
    }
    
    return 0;
}