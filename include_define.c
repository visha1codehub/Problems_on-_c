#include <stdio.h>
// #include "if_else.c"
#define PI 3.14
#define SQUARE(a) a*a

int main()
{
    float var = PI;
    int var2 = 5;
    float r = 7; 
    printf("This is my varible %f.\n",var);
    printf("This is my varible2 %d.\n",SQUARE(var2));
    printf("Area of the circle is %f.\n",PI*SQUARE(r));
    return 0;
}