#include<iostream>
using namespace std;
class Rectangle
{
private:
    double length;
    double width;
public:
    void setvalues(double l,double w)
    {
        length=l;
        width=w;
    }
    double getarea()
    {
        return(length*width);
    }
    double getperimeter()
    {
        return(2*(length+width));
    }
    void display()
    {
        cout<<"Area : "<<getarea()<<endl<<"Perimeter : "<<getperimeter()<<endl;

    }
};

int main()
{
    Rectangle rect;
    rect.setvalues(5,10);
    rect.display();


}



