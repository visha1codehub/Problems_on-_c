#include <stdio.h>
int find_prime(int m)
{
    int flag = 0;
    for (int i = 2; i <= m/2; i++)
    {
        if (m%i == 0)
        {
            flag = 1;
            
        }
        
    }
    if (flag == 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    
}
int main()
{
    int a,b;
    printf("Enter your number : ");
    scanf("%d%d",&a,&b);
    for (int i = a; i <= b; i++)
    {
        if (find_prime(i))
        {
            printf("%d ",i);
        }
        
    }

    return 0;
}