#include <stdio.h>
//Write a program to determine whether a character entered by the user is lowercase or not.//
int main(){
    char Character ;
    printf("Enter a Character:  \n");
    scanf("%c", &Character);

    if ('a'<=Character && 'z'>=Character)
    {
    printf("Enter letter %c is a lowercase\n" , Character);
    }
    else
    printf("Enter Character is not a lowercase \n ");
    
    return 0;
}