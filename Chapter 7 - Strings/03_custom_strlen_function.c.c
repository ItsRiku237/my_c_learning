#include <stdio.h>
int my_strlen(char *str){
    int i=0 ;
   /* while (str[i]!='\0')
    {
        i++;
    }
   return i;
}*/
int count ;
char c = str[i];
while (c!= '\0')
{
    i ++;
    c = str[i];
}
count = i ;
return count;
}

int main(){
    // Write your own version of strlen function from <string.h>
    char str[]="riku sahu" ;
  
    printf("No of char is %d ." , my_strlen(str));
    
    return 0;
}