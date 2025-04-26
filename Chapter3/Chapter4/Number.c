#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed_number;

    // Loop for guessing
    for (int i = 0; i < 100; i++)
    {
        printf("What is number that you might guess");
        scanf("%d", &guessed_number);
        
        if (guessed_number < randomNumber)
        {
            printf("Higher\n");
        }
        else if (guessed_number > randomNumber)
        {
            printf("Lower\n");
        }
        else
        {
            printf("Congratulations! You've guessed the number in %d tries.\n", no_of_guesses);
            break;
        }
        
        no_of_guesses++;
    }
    
    return 0;
}
