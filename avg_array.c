#include <stdio.h>
int main()
{
    int marks[4];
    char sub[][4] = { "Hindi", "Maths", "English", "Science" };
    printf("%s\n", sub[2]);
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter the marks of %c : ",sub[i]);
    //     scanf("%d",marks[i]);
    // }
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%d ",marks[i]);
    // }
    // printf("\n");

    return 0;
}