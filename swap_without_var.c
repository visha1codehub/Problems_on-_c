#include <stdio.h>

/* Swap value Without adding a extra variable */

void swap_(int *x, int *y)
{
    //***************Method-1**************//
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;

    //***************Method-2**************//
    // *x = *x + *y;
    // *y = *x - *y;
    // *x = *x - *y;
}
int main()
{
    int a, b;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    printf("\nBefore swapping......\nThe value of a = %d \nThe value of b = %d\n",a, b);
    swap_(&a,&b);
    printf("\nAfter swapping.......\nThe value of a = %d \nThe value of b = %d\n",a, b);
    return 0;
}