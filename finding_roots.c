#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, val, root1, root2;
    printf("Enter the coefficient of x^2 : ");
    scanf("%lf",&a);
    printf("Enter the coefficient of x : ");
    scanf("%lf",&b);
    printf("Enter the constant term : ");
    scanf("%lf",&c);
    printf("Required quadratic equation is %fx^2 + %fx + %lf = 0\n",a,b,c);
    
    val = (b*b) - 4*a*c;
    root1 = (-b + sqrt(val))/(2*a);
    root2 = (-b - sqrt(val))/(2*a);

    printf("Roots of the equation is %.2lf and %.2lf\n",root1,root2);
    return 0;
}