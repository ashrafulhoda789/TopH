#include<stdio.h>
int main()
{
    int t,w,g,sub,div,sub1;
    float k;
    scanf("%d",&t);

    for(int i=1; i<=t; i++)
    {
        scanf("%d %d",&w,&g);
        sub = w-g;
        div = sub/2;
        sub1 = w-g;
        k = (sub*1.0)/2;
        if(sub1%2==0)
        {
            printf("%d\n",div);
        }
        else
        {
            printf("%.1f\n",k);
        }

    }
}
