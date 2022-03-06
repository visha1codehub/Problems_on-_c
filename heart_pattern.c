#include <stdio.h>
int main()
{

    for (int r = 0; r < 7; r++)
    {
        for (int c = 0; c < 9; c++)
        {
            if ((r == 0 && c % 4 != 0) || (r == 1 && c % 4 == 0) || (r - c == 2) || (r + c == 10))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}