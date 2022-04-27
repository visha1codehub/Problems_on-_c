#include <stdio.h>

int main()
{
    int a, i;
    printf("Enter the number: ");
    scanf("%d", &a);

    // printf("Enter the position: ");
    // scanf("%d", &i);

    // if (a & (1 << (i - 1)))
    //     printf("1\n");
    // else
    //     printf("0\n");


    // *************************PRINT THE BINARY OF A NUMBER********************



    for (int i = 8; i > 0; i--)
    {
        if (a & (1 << (i - 1)))
            printf("1 ");
        else
            printf("0 ");
    }
    printf("\n");
    return 0;
}