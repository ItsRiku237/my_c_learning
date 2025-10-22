#include <stdio.h>
//We can write to a file in a very similar manner like we read the file . 
//write file 1st clear the file then write.
//Solution foir this problem that not clear the file and write is append  mode.
int main(){
    
    FILE *fptr;
    fptr = fopen("riku.txt", "a");
    int num = 2379 ;
    fprintf(fptr, "%d", num);
    return 0;
}