#include<iostream>
#include<iomanip>
using namespace std;

class areaOfCircle
{
    public:
    void area();
};
void areaOfCircle :: area()
{
    int radius;
    cin >> radius;
    double area;

    area = 3.141592653589793*radius*radius;
    cout << setprecision(12);
    cout << area;
}
int main()
{
    areaOfCircle obj;
    obj.area();
    return 0;
}