#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0));

    int randomNumber = (rand() % 100) + 1;
    int gussed;
    int number_of_guess = 0;

    do
    {
        printf("Enter you guess: ");
        scanf("%d", &gussed);

        if (gussed > randomNumber)
        {
            printf("Guess a Lower number.\n");
        }
        else if (gussed < randomNumber)
        {
            printf("Guess a higher number.\n");
        }

        number_of_guess++;

    } while (gussed != randomNumber);

    printf("YEAHH!!!! you guesses it correct its %d\n", randomNumber);
    printf("You took %d chances to gusse.\n", number_of_guess);

    return 0;
}