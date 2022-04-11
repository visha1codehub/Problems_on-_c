#include <stdio.h>

int main()
{
    int n, sum = 0, fact;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        fact = 1;
        for (int j = 1; j <= i; j++)
        {
            fact = fact*j;
        }
        sum = sum + fact;
    }
    printf("%d\n",sum);
    
    return 0;
}