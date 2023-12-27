#include<stdio.h>
int main()
{
    double n,i,a,b,c;
    scanf("%lf",&n);

    for(i=1; i<=n; i= i+1)
    {
        scanf("%lf",&a);
        b = a*a;
        c = a*(b+1)/2;
        printf("Case %0.0lf: %0.0lf\n",i,c);
    }
}