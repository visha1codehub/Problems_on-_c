#include <stdio.h>
int main()
{
    int x=10, a=1, b=2, c=3, d=4;
    x += a = b*c+d-a;
    printf("%d%d\n",a,x);
    return 0;
}