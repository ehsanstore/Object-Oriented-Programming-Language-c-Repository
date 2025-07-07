#include <iostream>
using namespace std;
class vehicle
{
protected:
    string manufacturer;

public:
    vehicle(string m)
    {
        manufacturer = m;
    }
    void displaymanufacturer()
    {
        cout << "Manufacturer :" << manufacturer << endl;
    }
};

class car : virtual public vehicle
{
protected:
    string cartype;

public:
    car(string m, string type) : vehicle(m)
    {
        cartype = type;
    }
    void displaycar()
    {
        displaymanufacturer();
        cout << "Car Type :" << cartype << endl;
    }
};

class boat : virtual public vehicle
{
protected:
    float length;

public:
    boat(string m, float l) : vehicle(m)
    {
        length = l;
    }
    void displayboat()
    {
        displaymanufacturer();
        cout << "Boat Length :" << length << "meters" << endl;
    }
};

class hybridvehicle : public car, public boat
{
public:
    hybridvehicle(string m, string type, float l) : vehicle(m), car(m, type), boat(m, l) {}
    void displayhybrid()
    {
        displaymanufacturer();
        cout << "Car Type :" << cartype << endl;
        cout << "Boat Length : " << length << " meters" << endl;
    }
};

int main()
{
    hybridvehicle o1(" TOYOTA ", " SUV ", 5.8);
    o1.displayhybrid();
}