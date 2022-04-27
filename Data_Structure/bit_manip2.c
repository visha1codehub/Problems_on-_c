#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the number a: ");
    scanf("%d", &a);
    printf("Enter the number b: ");
    scanf("%d", &b);
    for (int i = 8; i > 0; i--)
    {
        if (a & (1 << (i - 1)))
            printf("1 ");
        else
            printf("0 ");
    }
    printf("\n");
    for (int i = 8; i > 0; i--)
    {
        if (b & (1 << (i - 1)))
            printf("1 ");
        else
            printf("0 ");
    }
    printf("\n");
    int t = 0;
    for (int i = 0; i < 8; i++)
    {
        // if ((a & (1 << (i - 1))) != (b & (1 << (i - 1))))
        //     t++;
        if ((a ^ b) & (1 << i))
            t++;
    }
    printf("%d\n", t);

    return 0;
}