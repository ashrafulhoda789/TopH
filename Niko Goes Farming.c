#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int p;

    while(n--){
        scanf("%d",&p);

        p = p/4;
        printf("%d\n",p*p);
    }
}
