#include <stdio.h>

int main()
{
    int num, pos;
    int arr[] = {4,17,23,34,48,50,58,64,75,80,90,96};
    int arraySize = sizeof(arr);
    int intSize = sizeof(arr[0]);
    int length = arraySize / intSize;

    printf("Enter the number which you want insert in the array :\n");
    scanf("%d",&num);

    printf("Original array --> { ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("}\n");
    for (int i = 0; i < length; i++)
    {
        if (num < arr[i])
        {
            pos = i;
            break;
        }
    }
    length++;
    for (int i = length-1; i >= pos; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos] = num;

    printf("After insertion array --> { ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("}\n");
    

    return 0;

}