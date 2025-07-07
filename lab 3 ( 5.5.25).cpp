#include<iostream>
using namespace std;
class person
{
protected:
    string name;
    int age;
public:
    void set1(string n,int a)
    {
        name=n;
        age=a;
    }
    void display1()
    {
        cout<<"Name :"<<name<<endl<<"Age :"<<age<<endl;
    }
};

class student : public person
{
    string stdid;
public:
    void set2(string id)
    {
        stdid=id;
    }
    void display2()
    {
        display1();
        cout<<"Student Id :"<<stdid<<endl;
    }
};


class graduate : public student
{
    string thesis;
public:
    void set3(string t)
    {
        thesis=t;
    }
    void display3()
    {
        display2();
        cout<<"Thesis :"<<thesis<<endl;
    }
};
int main()
{
    graduate o1;
    o1.set1("Rafi",20);
    o1.set2("20244103077");
    o1.set3("Deep Learning");
    o1.display3();
}
