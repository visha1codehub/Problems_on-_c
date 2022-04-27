#include <stdio.h>
int binary_search(int arr[], int r, int l, int x)
{
    int m;
    while (r <= l)
    {
        m = (l + r) / 2;
        if (x == arr[m])
            return m;
        if (x > arr[m])
            r = m + 1;
        else
            l = m - 1;
    }
    return -1;
}
int main()
{
    int arr[] = {2, 6, 14, 22, 29, 38, 44, 56, 61, 69, 71, 78, 85, 93, 100, 112};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 34;
    int result = binary_search(arr, 0, n - 1, x);
    result == -1
        ? printf("Element is not present in the array....\n")
        : printf("Element is at index of %d in the array.....\n", result);
    return 0;
}