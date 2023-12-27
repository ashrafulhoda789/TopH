#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    long long n;

    for(int i=1; i<=t; i++)
    {
        scanf("%lld",&n);
        printf("Case %d: %lld\n",i,2*n-4);
    }
}
