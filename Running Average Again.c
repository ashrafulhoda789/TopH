#include <stdio.h>

int main()
{
    int n;
    float sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0; i<n; i++)
    {
        sum = sum + arr[i];
        float avg = sum/(i+1);
        printf("%f\n",avg);
    }

    return 0;
}
