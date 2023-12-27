#include<stdio.h>
int main()
{
    int x,y,rem,div;
    scanf("%d %d",&x,&y);

    if(x%y !=0){
        rem = x%y;
        div = x/y;
        printf("%d %d %d\n",div,rem,y);
    }
}
