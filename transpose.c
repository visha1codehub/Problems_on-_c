#include <stdio.h>

int main()
{
    int mat[3][3], tran[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the element of matrix1[%d][%d] : ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\nYour matrix is :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            tran[i][j] = mat[j][i];
        }
    }
    printf("\nTranspose of your matrix is :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", tran[i][j]);
        }
        printf("\n");
    }
            //***********Check if symetric matrix************//
    int flag = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (mat[i][j] != tran[i][j])
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0)
        printf("This is a symatrix matrix.\n");
    else
        printf("This is not a symatrix matrix.\n");

    return 0;
}