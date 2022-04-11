#include <stdio.h>
int main()
{
    int a=1, b=2, c=3, d;

    // d = (a>b?(a>c?3:4):(b>c?6:8));
    d = (a>b)?((a>c?a:c)):((b>c?b:c));
    printf("%d\n",d);
    
    return 0;
}