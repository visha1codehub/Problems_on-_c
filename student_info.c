#include <stdio.h>
typedef struct student_info
{
    char name[30];
    int roll_no;
    float marks;
}std;

int main()
{
    std sns[50];
    int n;

    printf("Enter the total no. of students : ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter the imformation of student %d :\n",n);
        printf("Enter name: ");
        scanf("%s",sns[i].name);
        printf("Enter roll no.: ");
        scanf("%d",&sns[i].roll_no);
        printf("Enter marks: ");
        scanf("%f",&sns[i].marks);
    }
    printf("Displaying information....\n");
    for (int i = 1; i <= n; i++)
    {
        printf("\nImformation of student %d:\n",n);
        printf("Name: %s\n", sns[i].name);
        printf("Roll no.: %d\n", sns[i].roll_no);
        printf("Marks: %f\n", sns[i].marks);
    }
    return 0;
}