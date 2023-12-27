#include<iostream>
using namespace std;
class password
{
    public:
    void display()
    {
        string pass;

        while(cin >> pass)
        {
            int cnt = 0,u=0, l=0,d=0;
            int len = pass.length();
            for(int i=0; i<len; i++)
            {
                if(pass[i] >='a' && pass[i]<='z')
                {
                    l=1;
                }
                if(pass[i] >='A' && pass[i]<='Z')
                {
                    u=1;
                }
                if(pass[i] >='0' && pass[i]<='9')
                {
                    d=1;
                }
                if(u==1 && l==1 && d==1)
                {
                    cnt++;
                    u=0;
                    l=0;
                    d=0;
                }
            }
            cout << cnt << endl;
        }
    }
};
int main()
{
    password obj;
    obj.display();
    return 0;
}