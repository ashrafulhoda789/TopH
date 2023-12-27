#include<stdio.h>
#include<math.h>
int main()
{
    int t,result;
    scanf("%d",&t);

    for(int i=0; i<t; i++)
    {
        int n;
        scanf("%d",&n);

        result = n*n;
        printf("%d\n",result);
    }

    
}