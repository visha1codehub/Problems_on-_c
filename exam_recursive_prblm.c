#include <stdio.h>
int recursive_s(int x, int y, int z, int n);
int main()
{
    int n1, n2, n3, n;
    printf("Enter the number of terms :");
    scanf("%d", &n);
    printf("Enter the first three terms of the series--\n");
    scanf("%d %d %d",&n1,&n2,&n3);
    recursive_s(n1,n2,n3,n);
    printf("%d\n",recursive_s(n1,n2,n3,n));
    return 0;
}

int recursive_s(int x, int y, int z, int n)
{
    int sum = 0;
    if (n = 1)
    {
        return x;
    }
    if (n = 2)
    {
        return y;
    }
    if (n = 3)
    {
        return z;
    }
    else
    {
        sum = sum + recursive_s(x,y,z,n-1) + recursive_s(x,y,z,n-2) + recursive_s(x,y,z,n-3);
        return sum;
    }
}