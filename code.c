#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int easy(void);
int intermediate(void);
int hard(void);

int main() 
{
    int choice = 0;

    do
    {
        printf("\nLevels:\n\n1 = EASY (MAX NUMBER: 10)\n2 = INTERMEDIATE (MAX NUMBER: 50)\n3 = HARD (MAX NUMBER: 100)\n\nChoose a difficulty: ");
        scanf("%i", &choice);

        if( choice == 1 )
        {
            easy();
        }

        else if( choice == 2 )
        {
            intermediate();
        }

        else if( choice == 3 )
        {
            hard();
        }

    } while( choice < 1 || choice > 3);

    return 0;
}

int easy(void)
{
    srand(time(NULL));
    
    int guess = 0;
    int min = 0;
    int max = 10;
    
    int random = min + rand() % (max + 1 - min);

    do
    {
        printf("Enter Guess: ");
        scanf("%i", &guess);

        if(guess != random)
        {
            if( guess < random )
            {
                printf("Too Low! Try Again!\n\n");
            }
            else if ( guess > random )
            {
                printf("Too High! Try Again!\n\n");
            }
        }

    } while(guess != random);

    if (guess == random)
    {
        printf("You guessed the correct number.\nYou Win!\n");
    }
    
    return 0;
}

int intermediate(void)
{
    srand(time(NULL));
    
    int guess = 0;
    int min = 0;
    int max = 50;
    
    int random = min + rand() % (max + 1 - min);
    
    do
    {
        printf("Enter Guess: ");
        scanf("%i", &guess);

        if(guess != random)
        {
            if( guess < random )
            {
                printf("Too Low! Try Again!\n\n");
            }
            else if ( guess > random )
            {
                printf("Too High! Try Again!\n\n");
            }
        }

    } while(guess != random);

    if (guess == random)
    {
        printf("You guessed the correct number.\nYou Win!\n");
    }
    
    return 0;
}

int hard(void)
{
    srand(time(NULL));
    
    int guess = 0;
    int min = 0;
    int max = 100;
    
    int random = min + rand() % (max + 1 - min);
    
    do
    {
        printf("Enter Guess: ");
        scanf("%i", &guess);

        if(guess != random)
        {
            if( guess < random )
            {
                printf("Too Low! Try Again!\n\n");
            }
            else if ( guess > random )
            {
                printf("Too High! Try Again!\n\n");
            }
        }

    } while(guess != random);

    if (guess == random)
    {
        printf("You guessed the correct number.\nYou Win!\n");
    }    
    
    return 0;
}