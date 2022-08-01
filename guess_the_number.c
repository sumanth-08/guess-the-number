#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main()
{

    int guess, nGuess = 1;
    srand(time(0));
    int number = rand() % 100 + 1;

    do
    {
        printf("Enter the number between 0 to 100\n");
        scanf("%d", &guess);

        if (guess > number)
        {
            printf("you need to guess lower number\n");
        }
        else if (guess < number)
        {
            printf("you need to guess grater number\n");
        }
        else
        {
            printf("Ya! You got it. \n You took %d attempts", nGuess);
        }

        nGuess++;

    } while (guess != number);
}