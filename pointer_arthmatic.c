#include <stdio.h>
int main()
{
    // int a = 34;
    // int *ptra = &a;
    // printf("%d\n", ptra);
    // printf("%d\n", ptra + 1);
    int arr[] = {6,8,4,8,90,6,23,14,1};

    printf("The adress of first element is %d\n",&arr[0]);
    printf("The adress of first element is %d\n",arr);
    printf("The adress of second element is %d\n",&arr[1]);
    printf("The adress of second element is %d\n",arr+1);

    printf("The value at adress of first element is %d\n",*(arr));
    printf("The value at adress of second element is %d\n",*(&arr[1]));
    printf("The value at adress of second element is %d\n",*(arr+1));
    printf("The value at adress of first element is %d\n",*(&arr[0]));

    return 0;
}