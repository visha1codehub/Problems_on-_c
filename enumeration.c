#include <stdio.h>
enum months
{
    jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};
enum boolean
{
    False, True
};
enum boolean isEven(int x)
{
    if (x%2 == 0)
    {
        return True;
    }
    else
        return False;
    
}
int main()
{
    int n;
    printf("Enter your nunmber : ");
    scanf("%d",&n);
    if (isEven(n))
    {
        printf("Even\n");
    }
    else
        printf("Odd\n");
    
    return 0;
}