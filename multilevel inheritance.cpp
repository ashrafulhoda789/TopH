#include<iostream>
using namespace std;
class A
{
    
    public:
    int a;
    void getData()
    {
      
        cout << "Enter a value of class A: ";
        cin >> a;
    }

};
class B : public A
{
    
    public:
    int b;
    void get_Data()
    {
       
        cout << "Enter a value of class B: ";
        cin >> b;
    }
};
class C : public B
{
    int c;
    public:
    void get_data()
    {
        
        cout << "Enter a value of class C: ";
        cin >> c;
    }
    void display()
    {
        int sum = a+b+c;
        cout << "Sum is: " << sum << endl;
    }
};
int main()
{
    C obj;
    obj.getData();
    obj.get_Data();
    obj.get_data();
    obj.display();
}