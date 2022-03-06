#include <stdio.h>

int main()
{
    int sum = 0;
    int matrix[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the element of 3x3 matrix[%d][%d] : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nYour required 3x3 matrix is :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    sum = sum + matrix[0][0]*(matrix[1][1]*matrix[2][2]-matrix[2][1]*matrix[1][2]);
    sum = sum + matrix[1][0]*(matrix[2][1]*matrix[0][2]-matrix[2][2]*matrix[0][1]);
    sum = sum + matrix[2][0]*(matrix[0][1]*matrix[1][2]-matrix[1][1]*matrix[0][2]);

    printf("Determinent of the array is %d.\n",sum);

    return 0;

}