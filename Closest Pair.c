// There something wrong
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    double d=0;

    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            d = sqrt((a[i]-a[j])*(a[i]-a[j]) + ((b[i]-b[j])*(b[i]-b[j])));
        }
    }
    printf("%.14lf\n",d);
    
}