#include <stdio.h>

int main()
{
    int a;
    // int *ptr1;
    int *ptr2 = &a;
    // int *ptr3 = NULL;
    printf("%d\n",*ptr2);
    printf("%d\n",ptr2);
    // if (ptr2 == ptr3)
    // {
    //     printf("Eqool Eqool\n");
    // }
    
    return 0;
}