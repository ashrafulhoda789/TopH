#include<iostream>
#include<string>
using namespace std;
class convertion
{
    public:
    void display();
};
void convertion :: display()
{
    int t;
    cin >> t;
    while(t--)
    {
        string name,name1;
        cin >> name;

        int len = name.length();
        for(int i=0; i<len; i++)
        {
            cout << name[i];
        }

        cout << " ";
        int j=0;
        
        for(int i=len-2; i>=0; i--)
        {
            name1[j] = name[i];
            j++;
        }

        char first = name1[0];
        for(int i=0; i<len; i++)
        {
            if(name1[i] == first)
            {
                cout << first;
            }
            else
            {
                cout << name1[i];
            }
        }
        cout << endl;
    }

}
int main()
{
    convertion obj;
    obj.display();
    return 0;
}