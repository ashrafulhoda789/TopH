#include<iostream>
using namespace std;

class distribution
{
    public :
    void fair();
};
void distribution :: fair()
{
    int x,y,remainder;
    cin >> x >> y;

    remainder = y % x;
    int result = x - remainder;
    cout << result;
}
int main()
{
    distribution obj;
    obj.fair();
    return 0;
}