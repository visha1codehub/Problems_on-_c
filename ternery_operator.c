#include <stdio.h>
int main()
{
    int a=7, b=5, c=3, d;

    d = (a>b?(a>c?3:4):(b>c?6:8));

    printf("%d\n",d);
    
    return 0;
}