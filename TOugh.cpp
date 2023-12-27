#include<iostream>
using namespace std;
class checkNumber
{
    public:
    void display();
};
void checkNumber :: display()
{
    int n,cnt=0;
    cin >> n;
    
    for(int i=2; i<n; i++)
    {
        if((n+2)%i==0)
        {
            cnt++;
        }
    }
    if(cnt==0)
    {
        cout<< "Yes" <<endl;
    }
    else
    {
        cout << "No" <<endl;
    }
    
}
int main()
{
    checkNumber obj;
    obj.display();
    return 0;
}