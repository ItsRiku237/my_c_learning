#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initilise random number generator
    srand(time(0));

    // Generate random number between 1 to 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int gussed;

    do
    {
        printf("Gussed the number\n");
        scanf("%d", &gussed);
        if (gussed > randomNumber)
        {
            printf("Lower number please!\n");
        }
        else if (gussed < randomNumber)
        {
            printf("Higher number please!\n");
        }
        no_of_guesses++;
    } while (gussed != randomNumber);

    printf("You gussed the number in %d gussed", no_of_guesses);

    return 0;
}
