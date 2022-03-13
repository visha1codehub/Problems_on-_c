#include <stdio.h>
int func(int x, int *ptr, int **pptr)
{
    int y,z;
    **pptr += 1;
    z = **pptr;
    *ptr += 2;
    y = *ptr;
    x += 3;
    return (x + y + z);
}
int main()
{
    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    printf("%d\n",func(c,b,a));
    return 0;
}