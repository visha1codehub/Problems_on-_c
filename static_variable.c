#include <stdio.h>
int func1()
{
    static int a1 = 8;
    a1++;
    return a1;
}
int main()
{
    int a;
    a = func1();
    a = func1();
    a = func1();
    a = func1();
    a = func1();
    printf("%d\n",a);
    return 0;
}