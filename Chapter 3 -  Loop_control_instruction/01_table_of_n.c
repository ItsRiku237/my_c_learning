#include <stdio.h>
//Write a program to print multiplication table of a given number n.
int main(){
   /* int x ,i , y ;
    printf("Enter a no:");
    scanf("%d", &x) ;
    for ( i = 1; i < 11; i++)
    {
        y = x*i ;kk
        printf("%d x %d = %d \n" , x,i , y);
    }*/

   int n,i,x ;
   printf("Enter the number:\n");
   scanf("%d", &n);

  for ( i = 0; i <11; i++)
  {
    x= i*n;
    printf("%d X %d = %d\n",n, i, x);
  }
  
   
    
    return 0;
}
