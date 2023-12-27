#include<iostream>
using namespace std;

class fibonacciSeries
{
    public:
    void fiboCount();
};
void fibonacciSeries :: fiboCount()
{
    int number,t1=0,t2=1,count=0;
    cin >> number;

    if(number==0 || number == 1)
    {
        cout << number;
    } 
    else
    {
        count = t1+t2;
    }
    for(int i=3; i<=number; ++i)
    {
        t1 = t2;
        t2 = count;
        count = t1+t2;
    }
    cout << count;
}
int main()
{
    fibonacciSeries obj;
    obj.fiboCount();
    return 0;
}