#include <stdio.h>
 //Write a program to find greatest of four numbers entered by the user.
int main(){
    int x , y , z ,a;
    printf("Entered 1st number :");
    scanf("%d", &x);
       printf("Entered 2nd number :");
    scanf("%d", &y);
       printf("Entered 3rd number :");
    scanf("%d", &z);
       printf("Entered 4th number :");
    scanf("%d", &a);

   
/*
    int greatest = x; // Assume the first number is the greatest

    if (y > greatest) {
        greatest = y;
    }
    if (z > greatest) {
        greatest = z;
    }
    if (a > greatest) {
        greatest = a;
    }
    printf("The greatest of the four numbers is: %d\n", greatest); */



    if (x>y && x>z && x>a)
    {printf("greatest of four number is %d", x);
    }
    else if (y>x && y>z && y>a)
    {
      printf("greatest of four number is %d", y);
    }
     else if (z>x && z>y && z>a)
    {
      printf("greatest of four number is %d", z);
    }
     else if (a>x && a>y && a>z)
    {
      printf("greatest of four number is %d", a);
    }
    
    return 0;
}