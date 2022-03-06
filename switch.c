#include <stdio.h>
int main()
{
    int a;
    printf("Enter your number : ");
    scanf("%d",&a);

    switch (a)
    {
        case 2:
            printf("Your number is 2.\n");
            break;
        case 3:
            printf("Your number is 3.\n");
            break;
        default:
            printf("Your number didn't match.\n");
            break;
    }

    return 0;
}

