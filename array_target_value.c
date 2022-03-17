#include <stdio.h>

int main()
{
    int n, k, r = 0;
    printf("Enter the length of the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Your array is -->\n[ ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]\n");
    printf("Enter the target value : ");
    scanf("%d", &k);
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[j] - arr[i] == k || arr[j] - arr[i] == -k)
            {
                r++;
            }
        }
    }
    printf("The number of pairs = %d\n", r);

    return 0;
}