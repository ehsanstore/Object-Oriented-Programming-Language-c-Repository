#include<iostream>
using namespace std;
class Arithmatic
{
    int x;
public:
    void input()
    {
        cout<<"enter the number : ";
        cin>>x;
    }

    Arithmatic operator+(Arithmatic const &obj)
    {
        Arithmatic A;
        A.x=x+obj.x;
        return A;
    }
    void print()
    {
        cout<<"The sum of two numbers is : "<<x<<endl;
    }
};

int main()
{
    Arithmatic o1,o2,total;
    o1.input();
    o2.input();
    total=o1+o2;
    total.print();
}
