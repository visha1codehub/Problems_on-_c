#include <stdio.h>
int main()
{
    int a;
    int b;

    printf("Enter your maths marks:\n");
    scanf("%d",&a);
    printf("Enter your science marks:\n");
    scanf("%d",&b);

    if (a>33&&b>33)
    {
        printf("You have passed in both maths and science.\n");
        printf("You got 45 rupees as reward.\n");
    }
    

    else if (a>33)
    {
        printf("You have passed in maths.\n");
        printf("You got 15 rupees as reward.\n");
    }
    
    else if (b>33)
    {
        printf("You have passed in science.\n");
        printf("You got 15 rupees as reward.\n");
    }
    

    return 0;
}