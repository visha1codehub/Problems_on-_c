#include <stdio.h>
int main()
{
    int i, a, j;
    char b;

    // printf("Enter your number : ");
    // scanf("%d", &a);
    // printf("Table of %d :\n", a);

    // for (i = 1; i <= 10; i += 1)
    // {
    //     printf("%d\n", i * a);
    // }
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)           
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}