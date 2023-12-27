#include<stdio.h>
int main()
{
    unsigned long long int i,t,sum=0,n;
    scanf("%llu",&t);

    while(t--){
        scanf("%llu",&n);
        sum=0;

        for(i=1; i<=n; i++)
        {
            sum = sum+i*i;
        }
        printf("%llu\n",sum);
    }
}