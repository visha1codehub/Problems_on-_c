#include <stdio.h>

int main()
{
    int n;
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
    for (int i = 0; i < n; i++)
    {
        int right = 0;
        for (int j = i + 1; j < n; j++)
        {
            right = right + arr[j];
        }

        int left = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            left = left + arr[j];
        }
        if (left == right)
        {
            printf("%d is between two subarrays that sum to %d.\n", arr[i], left);
        }
    }

    return 0;
}