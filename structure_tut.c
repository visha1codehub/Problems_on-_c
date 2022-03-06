#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    float marks;
    char name[40];
};//vishal, harry, miller;    <--Global Variables with declaration
// struct student vishal, harry, miller;  <--Global Variables
int main()
{
    struct student vishal, harry, miller; //<--Local Variables
    {
        vishal.id = 1;
        harry.id = 2;
        miller.id = 3;
        vishal.marks = 92.65;
        harry.marks = 79.48;
        miller.marks = 87.24;
        strcpy(vishal.name, "Vishal Gupta");
        strcpy(harry.name, "Harry Buffet");
        strcpy(miller.name, "Miller Planet");
        printf("Vishal got %f marks.\n", vishal.marks);
        printf("Vishal's id is %d.\n", vishal.id);
        printf("Vishal's full name is %s.\n", vishal.name);
        printf("Harry got %f marks.\n", harry.marks);
        printf("Harry's id is %d.\n", harry.id);
        printf("Harry's full name is %s.\n", harry.name);
        printf("Miller got %f marks.\n", miller.marks);
        printf("Miller's id is %d.\n", miller.id);
        printf("Miller's full name is %s.\n", miller.name);
    };

    return 0;
}