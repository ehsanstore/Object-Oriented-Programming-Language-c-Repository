/*#include<iostream>
using namespace std;
class Circle
{
private:
    double radius;
public:
    void compute_area(double r)
    {
        radius=r;
        double area=3.14*radius*radius;
        cout<<"Radius is :"<<radius<<endl<<"Area is :"<<area<<endl;
    }

};
int main()
{
    Circle obj;
    obj.compute_area(5.5);
}*/





#include<iostream>
#include<string>
using namespace std;
class Parent
{
protected:
    string name;

};
class Child:public Parent
{
public:
    void setName(string varsityName)
    {
        name=varsityName;
    }
    void display_name()
    {
        cout<<"Name is : "<<name;

    }
};
int main()
{
    Child obj;
    obj.setName("BUBT");
    obj.display_name();
}
