#include <stdio.h>
int rev_arr(int ary[],int m)
{
    int temp;

    for (int i = 0; i <= m/2; i++)
    {
        temp = ary[i];
        ary[i] = ary[m-1-i];
        ary[m-1-i] = temp;
    }
}
void print_arr(int ary[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",ary[i]);
    }
}
int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element of of arr[%d] :\n", i);
        scanf("%d", &arr[i]);
    }
    printf("Your normal array is : ");
    print_arr(arr,n);
    rev_arr(arr,n);
    printf("\nReversed array is : ");
    print_arr(arr,n);
    printf("\n");
    

    return 0;
}