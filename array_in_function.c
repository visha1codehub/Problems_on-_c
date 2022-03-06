#include <stdio.h>
void func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", array[i]);
    }
    array[0] = 123; /* This changes the value of array*/
}
void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", ptr[i]);
        printf("%d\n", *(ptr + i));
    }
    *(ptr + 2) = 455;
}

int main()
{
    int arr[] = {2, 5, 8, 11};
    // printf("At index 0 is %d\n",arr[0]);
    // func1(arr);
    // printf("After calling the function At index 0 is %d\n",arr[0]);
    func2(arr);
    printf("After calling the function2 At index 2 is %d\n", arr[2]);
    func2(arr);
    return 0;
}