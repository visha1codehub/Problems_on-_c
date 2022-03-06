#include <stdio.h>
int main()
{
    // int marks[] = {23,65,934,56,15};.
    // marks[0] = 45;
    // printf("Marks of student 1 is %d.\n", marks[0]);
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d value of the array : ", i);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ",marks[i]);
    }
    printf("\n");

    // return 0;
}