#include<stdio.h>
int main()
{
    double radius,C,diameter,ratio;
    scanf("%lf",&radius);

    C = 2*3.14159*radius;
    diameter = 2*radius;

    ratio = C/diameter;

    printf("%.5lf\n",ratio);
}