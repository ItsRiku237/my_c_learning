#include <stdio.h>

int main(){
    float c ,f;

    printf("Enter Temperature in celsius:");
    scanf("%f", &c );
    f = (c*9/5)+32 ;
    printf("%f celsius is equal to %f fahrenheit", c , f);
    return 0;
}