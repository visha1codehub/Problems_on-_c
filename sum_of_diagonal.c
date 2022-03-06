#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter the order of a square matrix :\n");
    scanf("%d", &n);
    int matrix[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the element of matrix[%d][%d] : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nYour required matrix is :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum = sum + matrix[i][j];
            }
            
        }
        
    }

    printf("The sum of the diagonal elements of your matrix is %d.\n",sum);
    
    return 0;
}