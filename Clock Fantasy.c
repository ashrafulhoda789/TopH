// There something wrong
#include<stdio.h>
int main()
{
    long double a,b,area;
    int t;
    scanf("%d",&t);

   while(t--)
    {
        scanf("%Lf %Lf",&a,&b);
        area = (a*b)/2;   
    }
    printf("%Lf",area);
}