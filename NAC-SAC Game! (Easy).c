\\Something wrong
#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    int n,a=1,g=1,ans;
    char str[100];

    for(i=0; i<t; i++)
    {
        
        scanf("%d",&n);
        scanf("%[^\n]%*c",str);
    }

    for(i=0; i<n; i++)
    {
        if(str[i]=='0')
        {
            a = (a*2)%100003;
        }
        else
        {
            g = (g*3)%100003;
        }
    }

    ans = (a+g)%100003;
    printf("%d\n",ans);
}