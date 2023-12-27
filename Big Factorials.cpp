//There has a problem.
#include<iostream>
using namespace std;

class bigFactorial
{
    public:
    void lastDigit();
};
void bigFactorial :: lastDigit()
{
    int number,fact=1,i;
    cin >> number;
    for(i=1; i<=number; i++)
    {
        fact = (fact*i)%10000;
    }
    cout << fact;
}
int main()
{
    bigFactorial obj;
    obj.lastDigit();
    return 0;
}