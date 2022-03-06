#include <stdio.h>
int main()
{
    int marks[2][4] = {{23, 43, 65, 34}, {555, 667, 446, 2354}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("The value of %d row and %d coloumn of the array is %d.\n", i, j, marks[i][j]);
            printf("%d ",marks[i][j]);

        }
        printf("\n");
    }

    return 0;
}