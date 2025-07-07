#include<iostream>
using namespace std;
class top
{
    int real,imag;
public:
    top()
    {
        real=0;
        imag=0;
    }
    top(int r, int i)
    {
        real=r;
        imag=i;
    }
    top operator +( top obj)
    {
        top tem1;
        tem1.real=real+obj.real;
        tem1.imag=imag+obj.imag;
        return tem1;
    }
    top operator -( top obj)
    {
        top tem2;
        tem2.real=real-obj.real;
        tem2.imag=imag-obj.imag;
        return tem2;
    }
    top operator *( top obj)
    {
        top tem3;
        tem3.real=((real*obj.real)-(imag*obj.imag));
        tem3.imag=((real*obj.imag)+(imag*obj.real));
        return tem3;
    }
    void display1()
    {
        cout<<real<<"+i"<<imag<<endl;
    }
    void display2()
    {
        cout<<real<<"-i"<<imag<<endl;
    }
    void display3()
    {
        cout<<real<<"*i"<<imag<<endl;
    }

};
int main()
{
    top o1(10,8),o2(9,7),o3,o4,o5;
    o3=o1+o2;
    o3.display1();
    o4=o1-o2;
    o4.display2();
    o5=o1*o2;
    o5.display3();
}
