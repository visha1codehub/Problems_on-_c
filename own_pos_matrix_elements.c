#include <stdio.h>

int main()
{
    int n, m, a, x;
    int arr[3][3];
    for (int q = 0; q < 9; q++)
    {
        printf("Enter the position : ");
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

        printf("Now enter the value : ");
        scanf("%d", &a);
        arr[n][m] = a;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}