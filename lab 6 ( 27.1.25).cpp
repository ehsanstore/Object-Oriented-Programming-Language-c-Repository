#include<iostream>
using namespace std;
class Rectangle
{
private:
    double radius;
public:
    void setvalues(double r)
    {
        radius=r;
    }
    double getarea()
    {
        return(3.1416*(radius*radius));
    }
    double getcircumference()
    {
        return(2*3.1416*radius);
    }
    void display()
    {
        cout<<"Area : "<<getarea()<<endl<<"Circumference : "<<getcircumference()<<endl;

    }
};

int main()
{
    Rectangle rect;
    double x;
    cin>>x;
    rect.setvalues(x);
    rect.display();


}




