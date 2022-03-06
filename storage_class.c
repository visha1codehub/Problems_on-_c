#include <stdio.h>
// int func1()
// {
//     static int a;   //static variable initial vaue is 0//
//     a++;
//     return a;
// }
// int main()
// {
//     printf("%d\n",func1());
//     printf("%d\n",func1());
//     printf("%d\n",func1());
//     printf("%d\n",func1());
//     printf("%d\n",func1());
//     printf("%d\n",func1());

//     return 0;
// }

void func()
{
    auto int i = 0;
    register int j = 0;
    static int k = 0;
    i++, j++, k++;
    printf("%d %d %d\n",i, j, k);
}
void main()
{
    func();
    func();
}