#include<stdio.h>
int main()
{
    int arr[100];
    int n,i;
    scanf("%d",&n);

    

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int max=arr[0];

    for(i=0; i<n; i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d\n",max);

}