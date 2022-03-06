#include <stdio.h>

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
    printf("Array --> [ ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]\n");

    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {

        if (min > arr[i])
        {
            min = arr[i];   
        } 

        if (max < arr[i])
        {
            max = arr[i];   
        }       
    }
    printf("The minimum number in the array is %d.\n",min);

    printf("The maximum number in the array is %d.\n",max);
    

    return 0;
}