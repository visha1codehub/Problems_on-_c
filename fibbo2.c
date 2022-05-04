#include <stdio.h>
static int count = 0;
int fibbo(int n)
{
    count++;
    if (n == 0 || n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return fibbo(n - 1) + fibbo(n - 2);
    }
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        printf("%d  ", fibbo(i));
    }
    printf("\n%d\n", count);

    return 0;
}