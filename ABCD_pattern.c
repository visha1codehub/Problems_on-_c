#include <stdio.h>

int main()
{
    // char a = 'A';
    int a = 65;
    for (int i = 6; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c ",a+i-j);
        }
         
        // for (int j = 2; j <= 2*(6-i+1)-1; j++)
        // {
        //     printf("  ");
        // }
        
        // for (int j = i; j >= 0; j--)
        // {
        //     printf("%c ",a+j);
        // }
        printf("\n"); 
    }
    
    return 0;
}