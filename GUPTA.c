#include <stdio.h>

int main()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if ((((i == 0) || (i == 6)) && ((j > 0) && (j < 6))) || ((j == 0) && ((i > 0) && (i < 6))) || ((j == 6) && ((i > 3) && (i < 6))) || (i == 4 && (j > 3)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for (int k = 0; k < 7; k++)
        {
            if (k == 0)
            {
                printf(" ");
            }
        }

        for (int j = 0; j < 7; j++)
        {
            if (((j == 0 || j == 6) && (i != 6)) || (i == 6 && (j != 0 && j != 6)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for (int k = 0; k < 7; k++)
        {
            if (k == 0)
            {
                printf(" ");
            }
        }

        for (int j = 0; j < 7; j++)
        {
            if (((j == 0 || (j == 6 && (i > 0 && i < 3))) && (i != 0)) || (i == 3 && j != 6) || (i == 0 && j != 6))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for (int k = 0; k < 7; k++)
        {
            if (k == 0)
            {
                printf(" ");
            }
        }

        for (int j = 0; j < 7; j++)
        {
            if ((i == 0) || (j == 3))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for (int k = 0; k < 7; k++)
        {
            if (k == 0)
            {
                printf(" ");
            }
        }

        for (int j = 0; j < 7; j++)
        {
            if ((((j == 0) || (j == 6)) && (i != 0)) || (i == 3) || ((i == 0) && ((j > 0) && (j < 6))))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for (int k = 0; k < 7; k++)
        {
            if (k == 0)
            {
                printf(" ");
            }
        }

        printf("\n");
    }
    return 0;
}