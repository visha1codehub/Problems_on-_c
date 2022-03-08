#include <stdio.h>

int main()
{
    int m, n, o, p;

    printf("Enter the order of matrix1 :\n");
    scanf("%d%d", &m, &n);
    int matrix1[m][n];

    printf("Enter the order of matrix2 :\n");
    scanf("%d%d", &o, &p);
    int matrix2[o][p];
    int mlpmtx[m][p];

    if (n != o)
    {
        printf("Multiplication is not possible.\n");
    }
    else
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("Enter the element of matrix1[%d][%d] : ", i, j);
                scanf("%d", &matrix1[i][j]);
            }
        }

        printf("\n");
        for (int i = 0; i < o; i++)
        {
            for (int j = 0; j < p; j++)
            {
                printf("Enter the element of matrix2[%d][%d] : ", i, j);
                scanf("%d", &matrix2[i][j]);
            }
        }

        printf("\nYour matrix1 is :\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", matrix1[i][j]);
            }
            printf("\n");
        }

        printf("Your matrix2 is :\n");
        for (int i = 0; i < o; i++)
        {
            for (int j = 0; j < p; j++)
            {
                printf("%d ", matrix2[i][j]);
            }
            printf("\n");
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < p; j++)
            {
                mlpmtx[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    mlpmtx[i][j] = mlpmtx[i][j] + (matrix1[i][k] * matrix2[k][j]);
                }
            }
        }

        printf("The multiplicatoin of the above matrix is :\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < p; j++)
            {
                printf("%d ", mlpmtx[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}