#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, limit;
    printf("Enter the limit of random number : ");
    scanf("%d",&limit);
    for (int i = 0; i < 3; i++)
    {
        num = rand()%limit + 1;
        printf("%d\n",num);
    }
    
    return 0;
}