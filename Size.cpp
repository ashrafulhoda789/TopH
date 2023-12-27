#include<iostream>
using namespace std;
class size
{
    public:
    void display()
    {
        int count;
        count = sizeof(double);
        cout << count;
    }
};
int main()
{
    size obj;
    obj.display();
    return 0;
}