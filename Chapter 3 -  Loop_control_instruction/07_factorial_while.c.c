#include <stdio.h>

int main(){
//   while loop
int i,n;
long long Fact=1;
printf("Enter the no :");
scanf("%d",&n);
while (i<=n)
{
     Fact*=i ;
}
   printf("Factorial of %d is : %lld", n , Fact);
    return 0;
}