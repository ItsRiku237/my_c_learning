#include <stdio.h>

int main(){
    //  Write a program to calculate the factorial of a given number using a for loop.
    int i, n ;
    long long Fact=1;
    printf("Enter the no :");
    scanf("%d",&n);

   if (n<0)
   { printf("Factorial is not possible");
   }
   else{
    for ( i = 1 ; i <= n ; i++)
    {
       Fact*=i ;
    }
    printf("Factorial of %d is : %lld", n , Fact);
   }
    return 0;
}
