#include <stdio.h>

int main()
{
    int n, r, sum, temp;

    printf("Enter your number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        temp = i;
        sum = 0;
        while (temp != 0)
        {
            r = temp % 10;
            sum = sum + r * r * r;
            temp = temp / 10;
        }
        if (sum == i)
        {
            printf("%d ", i);
        }

    }
    printf("\n");
    return 0;
}