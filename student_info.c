#include <stdio.h>
typedef struct student_info
{
    char name[30];
    int roll_no;
    float marks;
}student;

int main()
{
    student std[50];
    int n;

    printf("Enter the total no. of students : ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter the imformation of student %d :\n",n);
        printf("Enter name: ");
        scanf("%s",std[i].name);
        printf("Enter roll no.: ");
        scanf("%d",&std[i].roll_no);
        printf("Enter marks: ");
        scanf("%f",&std[i].marks);
    }
    printf("Displaying information....\n");
    for (int i = 1; i <= n; i++)
    {
        printf("\nImformation of student %d:\n",n);
        printf("Name: %s\n", std[i].name);
        printf("Roll no.: %d\n", std[i].roll_no);
        printf("Marks: %f\n", std[i].marks);
    }
    printf("List of those students who scored above 60%% marks.\n[ ");
    for (int i = 1; i <= n; i++)
    {
        if (std[i].marks > 60)
        {
            printf("%s ",std[i].name);
        }
        
    }
    printf("]\n");
    
    return 0;
}