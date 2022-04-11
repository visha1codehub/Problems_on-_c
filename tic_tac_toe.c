#include <stdio.h>

int main()
{
    int n, m, a, x, c = 95;
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = c;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }
    for (int q = 0; q < 9; q++)
    {
        if (q % 2 == 0)
        {
            printf("1st player turn--\n");
            printf("Enter the position : ");
            a = 111;
        }
        else
        {
            printf("2nd player turn--\n");
            printf("Enter the position : ");
            a = 120;
        }

        scanf("%d", &x);
        int k = 1;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (k == x)
                {
                    n = i;
                    m = j;
                }
                k++;
            }
        }

        arr[n][m] = a;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%c ", arr[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}