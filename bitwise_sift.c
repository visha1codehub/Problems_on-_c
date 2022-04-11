#include <stdio.h>
int func(int num)
{
    int count = 0;
    while (num)
    {
        count++;
        num = num>>1;
    }
    return count;

}
int main()
{
    // int c = func(435);
    // printf("%d\n",c);



    int a = 128;
    a = a<<3;
    printf("%d\n",a);
    return 0;
}