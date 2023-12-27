// There is something wrong
#include<stdio.h>
int main()
{
    int n,t1,t2=1,nextTerm=0,fibo;
    scanf("%d %d",&t1,&n);

    for(nextTerm = t1; nextTerm<=n; nextTerm++)
    {
        if(nextTerm<1)
        {
            fibo = nextTerm;
        }
        else
        {
            fibo = t1+t2;
            t1 = t2;
            t2 = fibo;
            if(fibo>n)
            {
                break;
            }
        }
        printf("%d\n",fibo);
        nextTerm++;
        
    }

        
    
}