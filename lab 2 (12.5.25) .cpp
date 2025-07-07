#include<iostream>
using namespace std;
class device
{
public:
    string brand;
    void set1(string b)
    {
        brand=b;
    }
    void display1()
    {
        cout<<"Brand :"<<brand<<endl;
    }
};
class laptop : virtual public device
{
public:
    string model;
    void set2(string m)
    {
        model=m;
    }
    void display2()
    {
        display1();
        cout<<"Model :"<<model<<endl;
    }
};
class tablet : virtual public device
{
public:
    float screensize;
    void set3(float s)
    {
        screensize=s;
    }
    void display3()
    {
        cout<<"Screen Size :"<<screensize<<endl;
    }
};
class hybriddevice : public laptop, public tablet
{
public:
    void show()
    {
        display2();
        display3();
    }
};
int main()
{
    hybriddevice obj;
    obj.set1("SAMSUNG");
    obj.set2("LED");
    obj.set3(12.5);
    obj.show();
}
