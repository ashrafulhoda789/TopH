#include<stdio.h>
int main()
{
    int n,count=0,r,p,sum=0;
    scanf("%d",&n);

    while(1)
    {
        r = n%2;
        n = n/2;
        if(r==1)
        {
            count++;
        }
        if(n==0)
        {
            break;
        }
    }

    for(int i=0; i<count; i++)
    {
        p = pow(2,i);
        sum = sum+p;
    }

    printf("%d\n",sum);
}