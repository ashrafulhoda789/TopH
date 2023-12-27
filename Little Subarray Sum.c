#include<stdio.h>
int main()
{
    int arr[1000];
    int n,n1,n2;
    scanf("%d %d %d",&n,&n1,&n2);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=n1; i<=n2; i++)
    {
        sum = sum+arr[i];
    }
    printf("%d\n",sum);
}