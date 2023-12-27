#include<iostream>
using namespace std;
class nodes
{
    public:
    void display();
};
void nodes :: display()
{
    int a,b,i,j,r=1;
    cin >> a >> b;
    
    for(i=2; i<=a; i++)
    {
        for(j=2; j<b; j++)
        {
            if(i%j==0)
            {
                r = i*r;
            }
        }
        
        cout << r <<endl;
    }
    
}
int main()
{
    nodes obj;
    obj.display();
    return 0;
}