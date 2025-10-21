#include <stdio.h>
#include <string.h>

// Create a two-dimensional vector using structures in C.
struct vector
{
    int i;
    int j;
};

int main(){
    struct vector v = {2,3} ; //Structures can also be initialized as follows.
    // v.i = 2;
    // v.j = 3;
   printf("The two dimensional vector is %di + %dj .", v.i , v.j);
    return 0;
}