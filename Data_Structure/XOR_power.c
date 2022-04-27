#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,5,9,7,5,3,1,9,2};
    int res = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        res = res^arr[i];
    }
    printf("%d\n",res);
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        res = res^arr[i];
    }
    return 0;
}