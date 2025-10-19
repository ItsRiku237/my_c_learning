#include <stdio.h>
// 9. Create a three–dimensional array and print the address of its elements in 
// increasing order
int main(){
    int arr[2][2][2] ;
    int value = 1 ;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                arr[2][2][2] = value++ ;
            }
            
        }
        
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("arr[%d][%d][%d] = %d\n",i,j,k,&arr[i][j][k]);
            }
            
        }
        
    }
    
    return 0;
}