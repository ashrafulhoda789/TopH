#include<stdio.h>
int checkPrime(int n);

int main()
{
    int a,prime;
    scanf("%d",&a);

    prime = checkPrime(a);
    printf("%d\n",prime);
}

int checkPrime(int n)
{
    int count,check=0,i,prime=1;
    while(n!=check)
    {
        count=0;
        prime++;
        for(i=2; i<=prime/2; i++)
        {
            if(prime%i==0)
            {
                count=1;
            }
        }
        if(count==0)
        {
            check++;
        }
    }
    return prime;

}