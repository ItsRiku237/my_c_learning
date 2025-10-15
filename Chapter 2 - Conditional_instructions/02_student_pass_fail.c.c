#include <stdio.h>
/*Write a program to determine whether a student has passed or failed. To pass, a 
student requires a total of 40% and at least 33% in each subject. Assume there 
are three subjects and take the marks as input from the user.*/
int main(){
    int C_progg , Math, Phy ;
    float Percentage ,total ;

    printf("Mark secuired in C progg :");
    scanf("%d", &C_progg);
    
      printf("Mark secuired in Math :");
    scanf("%d", &Math);
    
      printf("Mark secuired in Phy :");
    scanf("%d", &Phy);

    total= C_progg+ Math+ Phy ;
    Percentage= (total/300)*100 ;



    if(C_progg>=33 && Math>=33 && Phy>=33 && Percentage>=40)
    printf("The student has pass");

    else
    printf("The student has not pass");

        return 0;
}