#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of limit : ");
    scanf("%d",&n);
    for (int i = 2; i <= n; i++)
    {
        int j;
        for (j = 2; j < n; j++)
        {
            if (i%j == 0)
            {
                break;
            } 
        }
        if (i == j)
        {
            printf("%d\n",j);
        }
          
    }
    
    return 0;
}