#include <stdio.h>

int main(){
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);

    if(x%6 == 0){
     printf("%d is divisible by 6", x);}
     else
     printf("%d is not divisible by 6", x);
    return 0;
} 