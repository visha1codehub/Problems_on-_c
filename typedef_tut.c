#include <stdio.h>
// typedef <previous name> <alias name>
typedef struct student
{
    int id;
    float marks;
    char name[40];
}std;
int main()
{
    std vishal, miller;    //<-- Using alias
    vishal.id = 111;
    miller.id = 222;
    printf("ID of Vishal is %d.\n",vishal.id);
    printf("ID of miller is %d.\n",miller.id);
    typedef int* intpointer;
    intpointer a,b;
    int c = 67;
    a = &c;
    b = &c;
    typedef float f;
    f marks = 23.435;
    printf("The mark is %f.\n",marks);
    return 0;
}