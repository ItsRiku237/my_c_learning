#include <stdio.h>
                //   CHAPTER 8 – STRINGS
int main(){
    // Which of the following is used to appropriately read a multi-word string.
    // char st[]={'R','i','k','u','\0'};
// char st[] = {"Riku"};
 char st[22] ;
gets(st);
 puts(st);
    printf("%s",st);
    return 0;
}
