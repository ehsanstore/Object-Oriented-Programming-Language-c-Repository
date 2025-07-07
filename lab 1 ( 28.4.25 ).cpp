#include<iostream>
using namespace std;
class Distance
{
    int meters;
public:
    Distance()
    {
        meters=0;
    }
    Distance(int m)
    {
        meters=m;
    }
    Distance operator++()
    {
        ++meters;
        return *this;
    }
    Distance operator++(int)
    {
        Distance temp=*this;
        meters++;
        return temp;
    }
     Distance operator--()
    {
        --meters;
        return *this;
    }
    Distance operator--(int)
    {
        Distance temp=*this;
        meters--;
        return temp;
    }
    void display()
    {
        cout<<"Distance :"<<meters<<"meter"<<endl;
    }
};
int main()
{
    Distance d1(5);
    Distance d2=++d1;
    d1.display();
    d2.display();
    Distance d3=d1++;
    d1.display();
    d3.display();
    Distance d4=--d1;
    d1.display();
    d4.display();
    Distance d5=d1--;
    d1.display();
    d5.display();
}
