#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rpsDecesion(char my, char comp)
{
    if (my == comp)
    {
        printf("Game is tie\n");
    }
    else if (my == 'r')
    {
        if (comp == 'p')
        {
            printf("You lose\n");
        }
        else if (comp == 's')
        {
            printf("You won\n");
        }
    }
    else if (my == 'p')
    {
        if (comp == 's')
        {
            printf("You lose\n");
        }
        else if (comp == 'r')
        {
            printf("You won\n");
        }
    }
    else if (my == 's')
    {
        if (comp == 'r')
        {
            printf("You lose\n");
        }
        else if (comp == 'p')
        {
            printf("You won\n");
        }
    }
}
int main()
{
    int a = 0;

    char my, comp, rep;

    int ran_no;

    time_t t;

    srand((unsigned)time(&t));

    ran_no = rand() % 3 + 1;

    if (ran_no == 1)
    {
        comp = 'r';
    }
    else if (ran_no == 2)
    {
        comp = 'p';
    }
    else if (ran_no == 3)
    {
        comp = 's';
    }

    while (a < 1)
    {
        printf("Enter your choice among r , p or s : ");

        scanf("%c", &my);

        printf("You choose %c\n", my);

        printf("Computer choose %c\n", comp);

        rpsDecesion(my, comp);

        printf("Wanna play again?? : ");

        scanf("%c", &rep);

        if (rep == 'y')
        {
            continue;
        }
        else if (rep == 'n')
        {
            exit;
        }
    }

    return 0;
}