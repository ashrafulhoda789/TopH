#include<stdio.h>
int main()
{
    int number,count=0;
    scanf("%d",&number);

    for(int i=2; i<number; i++)
    {
        if(number%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}