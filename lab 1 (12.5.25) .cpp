#include<iostream>
using namespace std;
class shape
{
public:
    double radius;
    void set1(double r)
    {
        radius=r;
    }
};
class circle : public shape
{
public :
    double area()
    {
        return 3.14*(radius*radius);
    }
    void display()
    {
        cout<<"Area :"<<area()<<endl;
    }
};
class cylinder : public circle
{
public:
    double height;
    void set2(double h)
    {
        height=h;
    }
    double volume()
    {
        double c1=3.14*(radius*radius)*height;
        cout<<"Volume :"<<c1<<endl;
    }
    double surfacearea()
    {
        double c2=2*3.14*radius*(height+radius);
        cout<<"Surface Area :"<<c2<<endl;
    }
};
int main()
{
    cylinder obj;
    obj.set1(1);
    obj.set2(1);
    obj.display();
    obj.volume();
    obj.surfacearea();

}
