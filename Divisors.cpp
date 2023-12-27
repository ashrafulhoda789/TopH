#include<iostream>
using namespace std;
int main()
{
    int number,i;
    cin >> number;

    for(i=1; i<=number; i++)
    {
        if(number%i==0)
        {
            cout << i << endl;
        }
    }
}