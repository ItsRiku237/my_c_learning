#include <stdio.h>

int main(){
    /*Calculate income tax paid by an employee to the government as per the slabs 
mentioned below:
 Income Slab Tax 
 2.5 – 5.0L 5%
 5.0L - 10.0L 20%
 Above 10.0L 30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.*/

     int Amount ;
     float tax ;
      
    printf("Enter the amount :");
    scanf("%d" , &Amount );

    if(Amount<=250000)
    {
    printf("No tax paid");
    }
    else if (Amount>250000 && Amount<=500000){
      tax=(Amount-250000)*0.05 ;
      printf("tax pay %f" ,tax);
    }

      else if (Amount>500000 && Amount<=1000000){
      tax=(250000*0.05)+(Amount-500000)*0.20 ;
      printf("tax pay %f" ,tax);}

        else {
      tax=(250000*0.05) +(500000*0.20) + (Amount-1000000)*0.30 ;
      printf("tax pay %f" ,tax);}

    return 0;
}