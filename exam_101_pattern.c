#include <stdio.h>
int main()
{

    for (int i = 1; i<=8; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (j==i-1 || j == 0 || i%2 != 0)
            {
                printf(" %d ",1);
            }
            else
            {
                 printf(" %d ",0);
            }
        }
        printf("\n");
    }

    return 0;
}