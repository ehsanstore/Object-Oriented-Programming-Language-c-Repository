#include<iostream>
using namespace std;
class Gadget
{
private:
    string name,brand;
    double price;
public:
    Gadget()
    {
        name="Unknown";
        brand="Generic";
        price=0.0;
        cout<<"Ami Default Constructor "<<endl;
    }
    Gadget(string n,string b,double p)
    {
        name=n;
        brand=b;
        price=p;
        cout<<"Ami parameterized constructor "<<endl;
    }
    Gadget(const Gadget &obj)
    {
        name=obj.name;
        brand=obj.brand;
        price=obj.price;
        cout<<"Ami Copy Constructor "<<endl;
    }
    void display()
    {
        cout<<"Name : "<<name<<endl<<"Brand : "<<brand<<endl<<"Price : "<<price<<endl<<"Ami Main Output"<<endl;
    }
    void display2()
    {
        cout<<"Name : "<<name<<endl<<"Brand : "<<brand<<endl<<"Price : "<<price<<endl<<"Ami Copy Output"<<endl;
    }
};
int main()
{
    double c;
    string a,b;
    getline(cin,a);
    getline(cin,b);
    cin>>c;
    Gadget ms;
    Gadget sp(a,b,c);
    sp.display();
    Gadget ps=sp;
    ps.display2();
}


