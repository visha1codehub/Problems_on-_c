#include <stdio.h>

int main()
{
    int num, main_num, temp, new_num = 0;
    int arr[10];
    printf("Enter your number : ");
    scanf("%d",&num);
    main_num = num;
    while (num != 0)
    {
        temp = num%10;
        new_num = (new_num*10) + temp;
        num = num/10;
    }
    printf("%d\n",new_num); 
    if (new_num == main_num)
    {
        printf("This is a pelindrome number.\n");
    }
    else
    {
        printf("This is not a palindrome number.\n");
    }
    
    return 0;
}