#include<stdio.h>
int main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int count=0;

    for(int i=n1; i<=n2; i++)
    {
        if(i%2 !=0)
        {
            count++;
        }
    }
    printf("%d\n",count);
}
