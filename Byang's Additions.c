#include<stdio.h>
int main()
{
    int a,b,c=0;
    int a1[10],b1[10];
    scanf("%d %d",&a,&b);

    int i =1;

    while(a!=0 && b!=0)
    {
        if(a!=0){
            a1[i] = a%10;
            a = a/10;
        }
        if(b!=0){
            b1[i] = b%10;
            b = b/10;
        }
        i = i+1;
    }
    i -=1;
    while(i>0)
    {
        if(a1[i] + b1[i] >=10){
            c = 1;
            break;
        }
        i--;
    }


    if(c)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}
