#include <stdio.h>
int ins_sort(int ary[], int n)
{
    int pos, temp;
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            if (ary[j] < ary[i])
            {
                pos = j+1;
                break;
            }
            else
                pos = 0;
        }
        // Shift the elements of the array
        
        temp = ary[i];
        for (int k = i; k >= pos; k--)
        {
            ary[k] = ary[k - 1];
        }
        ary[pos] = temp;
    }
}
void print_arr(int ary[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ary[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d index element :\n", i);
        scanf("%d", &arr[i]);
    }
    printf("Original array is :\n");
    print_arr(arr, n);
    ins_sort(arr, n);
    printf("Sorted array is :\n");
    print_arr(arr, n);

    return 0;
}