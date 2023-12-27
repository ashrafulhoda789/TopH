#include<iostream>
using namespace std;
class assignment
{
    public:
    void display()
    {
        int n,cnt=0;
        cin >> n;

        for(int i=2; i<n; i++)
        {
            if(n%i==0)
            {
                cnt++;
            }
        }
        if(cnt==0)
        {
            cout << "NO PUNISHMENT" << endl;
        }
        else
        {
            for(int i=1; i<=n; i++)
            {
                cout << "I DID NOT DO THE ASSIGNMENT." << endl;
            }
        }
    }
};
int main()
{
    assignment obj;
    obj.display();
    return 0;
}