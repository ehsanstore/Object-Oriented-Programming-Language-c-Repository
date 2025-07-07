#include <iostream>
using namespace std;
class vehicle
{
    string manufacturer;

public:
    void set1(string m)
    {
        manufacturer = m;
    }
    void display1()
    {
        cout << "Manufacturer :" << manufacturer << endl;
    }
};
class car : virtual public vehicle
{
    string cartype;

public:
    void set2(string c)
    {
        cartype = c;
    }
    void display2()
    {
        display1();
        cout << "Cartype :" << cartype << endl;
    }
};

class boat : virtual public vehicle
{
    float length;

public:
    void set3(float l)
    {
        length = l;
    }
    void display3()
    {
        display1();
        cout << "Length :" << length << endl;
    }
};

class hybridvehicle : public car, public boat
{
    public:
    void display4()
    {
        display2();
        display3();
    }
};

int main()
{
    hybridvehicle o1;
    o1.set1("RAFI");
    o1.set2("SUV");
    o1.set3(30.0);
    o1.display2();
    o1.display3();
    o1.display4();
}
