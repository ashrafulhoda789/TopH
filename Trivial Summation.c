#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int r,a,b,d,sum=0;

    for(int i=1; i<=t; i++)
    {
        scanf("%d %d %d %d",&r,&a,&b,&d);
        for(i=1; i<=r; i++)
        {
            if(i%a==0 || i%b==0)
            {
                sum = (sum+i)%d;
            }
        }
    }
    printf("%d\n",sum);
}
