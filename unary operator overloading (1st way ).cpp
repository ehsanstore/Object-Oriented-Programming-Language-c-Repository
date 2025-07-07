#include<iostream>
using namespace std;
class Distance
{
public:
    int feet,inch;
    Distance(int f,int i)
    {
        this->feet=f;
        this->inch=i;
    }
    void operator--()
    {
        feet=feet-1;
        inch=inch-1;
        cout<<"\nFeet & Inches(Decrement) : "<<feet<<" ' "<<inch;
    }

};
int main()
{
    Distance d1(8,9);
    --d1;

}
