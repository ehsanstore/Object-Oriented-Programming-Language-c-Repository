#include<iostream>
using namespace std;
class university
{
protected:
    string name,location;
public:
    void set1(string n,string l)
    {
        name=n;
        location=l;
    }
    void display1()
    {
        cout<<"Name :"<<name<<endl<<"Location :"<<location<<endl;
    }
};
class department:public university
{
    string deptname;
    int numofstu;
public:
    void set2(string d,int num)
    {
        deptname=d;
        numofstu=num;
    }
    void display2()
    {
        display1();
        cout<<"Department Name :"<<deptname<<endl<<"Number of students :"<<numofstu<<endl;
    }
};
int main()
{
    department o1;
    o1.set1("Rafi","Mirpur");
    o1.set2("BUBT",1000);
    o1.display2();
}
