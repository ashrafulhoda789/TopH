#include<stdio.h>
int main()
{
    int T,i;
    scanf("%d",&T);

    for(i=1; i<=T; i++)
    {
        double radius,area_of_circle,width_of_rectangle,length_of_rectangle;
        double area_of_rectangle,area;
        scanf("%lf",&radius);

        area_of_circle = 3.1416*radius*radius;
        width_of_rectangle = 2*radius;
        length_of_rectangle = 4*radius;
        area_of_rectangle = width_of_rectangle*length_of_rectangle;
        area = area_of_rectangle - (2*area_of_circle);
        printf("Case %d: %.2lf\n",i,area);
    }
}
