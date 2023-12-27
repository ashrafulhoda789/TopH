#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);

    int rem = y%x;
    int buy = x-rem;
    printf("%d\n",buy);
}
