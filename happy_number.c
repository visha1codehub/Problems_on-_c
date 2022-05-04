#include <stdio.h>
int ishappy(int n)
{
    int r, sum = 0;
    while (n > 0 && sum > 1)
    {
        r = n % 10;
        sum = sum + r * r;
        n = n / 10;
    }
}
int main()
{
    int num;
    printf("Enter your number : ");
    scanf("%d", &num);

    return 0;
}