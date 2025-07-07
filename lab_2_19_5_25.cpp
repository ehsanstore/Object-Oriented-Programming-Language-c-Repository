#include<iostream>
using namespace std;
class temperature
{
    float celsius;
    public:
    temperature(float c)
    {
        celsius=c;
    }
    temperature operator--()
    {
        --celsius;
        return *this;
    }
    temperature operator--(int)
    {
        temperature temp=*this;
        temp.celsius=celsius--;
        return temp;
    }
    void show()
    {
        cout<<"Celsius :"<<celsius<<'\n';
    }
};
int main()
{
    temperature o1(5.0);
    temperature o2=--o1;
    o1.show();
    o2.show();
    o2=o1--;
    o1.show();
    o2.show();
}