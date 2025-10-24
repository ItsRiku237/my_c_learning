#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//                            PROJECT 2: SNAKE, WATER, GUN

// Snake, water, gun or rock, paper, scissors is a game most of us have played during
// school time. (I sometimes play it even now).
// Write a C program capable of playing this game with you.
// Your program should be able to print the result after you choose snake/water or gun.
int main()
{
    srand(time(0));
    /*
           0 --> Snake
           1 --> Water
           2 --> Gun
    */
    int Player, Computer = rand() % 3;
    printf("Choose 0 for Snake , 1 for water , 2 for Gun\n");
    scanf("%d", &Player);
    printf("Computer choose %d \n", Computer);

    if (Player == 0 && Computer == 0)
    {
        printf("Its a Draw!\n");
    }
    else if (Player == 0 && Computer == 1)
    {
        printf("You win!\n");
    }
    else if (Player == 0 && Computer == 2)
    {
        printf("You lose!\n");
    }
    else if (Player == 1 && Computer == 0)
    {
        printf("You lose!\n");
    }
    else if (Player == 1 && Computer == 1)
    {
        printf("Its a Draw.\n");
    }
    else if (Player == 1 && Computer == 2)
    {
        printf("You win!\n");
    }
    else if (Player == 2 && Computer == 0)
    {
        printf("You win!\n");
    }
    else if (Player == 2 && Computer == 1)
    {
        printf("You lose!\n");
    }
    else if (Player == 2 && Computer == 2)
    {
        printf("Its a Draw.\n");
    }
    else
    {
        printf("Something went wrong !\n");
    }

    return 0;
}