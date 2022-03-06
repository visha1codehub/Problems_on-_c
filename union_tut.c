#include <stdio.h>
union student
{
    int id;
    float marks;
    char fav_char;
}s1;

int main()
{
    s1.fav_char = '7';
    s1.marks = 89.76;
    s1.id = 111;    
    printf("s1 id is %d\n",s1.id);
    printf("s1 marks is %f\n",s1.marks);
    printf("s1 favorite character is %c\n",s1.fav_char);
    return 0;
}