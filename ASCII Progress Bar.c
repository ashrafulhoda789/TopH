#include<stdio.h>
int main()
{
    double number;
    int number2;
    scanf("%lf",&number);

    number2 = number;
    if(number2 !=0)
    {
        number2 = number2 - number2%10;
    }

    number2 = number2/10;
    printf("[");

    for(int i=1; i<=10; i++)
    {
        if(i<=number2){
            printf("+");
        }
        else
        {
            printf(".");
        }
    }
    printf("] ");
    printf("%.0lf%%\n",trunc(number));
}
