#include<iostream>
using namespace std;
class Distance
{
    int feet,inch;
public:
    Distance()
    {
        this->feet=0;
        this->inch=0;
    }
    Distance(int f,int i)
    {
        this->feet=f;
        this->inch=i;
    }

    Distance operator+(Distance const &obj)
    {
        Distance tem;
        tem.feet=this->feet+obj.feet;
        tem.inch=this->inch+obj.inch;
        return tem;
    }
    void print()
    {
        cout<<"Total Feet & Inches: "<<feet<<"'"<<inch<<endl;
    }

};
int main()
{
    Distance c1(8,9),c2(10,2);
    Distance c3=c1+c2;
    c3.print();
}




