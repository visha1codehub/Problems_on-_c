#include <stdio.h>
long int fibo(int n)
{
    long int arr[n+2];
    long int i;
    arr[0] = 0;
    arr[1] = 1;
    for (i = 2; i <= n; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }
    return arr[n];
    
}
int main()
{
    int num ;
    printf("Enter the number of term : ");
    scanf("%d", &num);
    printf("%ld\n", fibo(num));
    return 0;
}
