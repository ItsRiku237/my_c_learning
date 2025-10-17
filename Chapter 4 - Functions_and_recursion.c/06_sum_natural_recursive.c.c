#include <stdio.h>

int sum(int n){
    if (n == 0)
    {
      return 0;
    }
    else{
    return n + sum(n-1);
    }
}

int main(){
    // Write a recursive function to calculate the sum of first ‘n’ natural numbers
    int n ;
    printf("Enter the number of term to sum :");
    scanf("%d",&n);
    if (n <= 0)
    {
        printf("Enter number is not a Natural number .");
    }
    else{
  printf("Sum of the first %d natural number is %d", n, sum(n));
    }
    
    return 0;
}