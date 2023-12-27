#include<iostream>
using namespace std;
class swap_pointer
{
    public:
    void display()
    {
        int num1,num2;
        cin >> num1 >> num2;
        int *ptr1=&num1;
        int *ptr2=&num2;

        cout << "Two numbers before swapping: " << *ptr1 << " " << *ptr2 << endl;
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;

        cout << "Two numbers after swapping: " << *ptr1 << " " << *ptr2<<endl;
    }
};
int main()
{
    swap_pointer p;
    p.display();
}