#include <stdio.h>
void arrRev(int arr[])
{
    int temp;
    for (int i = 0; i < 8/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[7-i];
        arr[7-i] = temp;
    }
    
}
void arrPrint(int arr[])
{
    for (int i = 0; i < 8; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}
int main()
{
    int arr[] = {2,123,8,5,12,34,96,87};
    arrPrint(arr);
    arrRev(arr);
    arrPrint(arr);
    return 0;
}