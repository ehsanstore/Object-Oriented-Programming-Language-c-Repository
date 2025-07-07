#include<iostream>
using namespace std;
class Box
{
    double length,width,height;
public:
    Box(double l,double w,double h)
    {
        length=l;
        width=w;
        height=h;
    }
    double volume()
    {
        double calculate=length*width*height;
        return calculate;
    }
    double operator<(Box obj)
    {
        return volume()<obj.volume();
    }
     double operator==(Box obj)
    {
        return volume()==obj.volume();
    }
     double operator!=(Box obj)
    {
        return volume()!=obj.volume();
    }
};
int main()
{
    Box o1(10.0,10.0,10.0);
    Box o2(20.0,20.0,20.0);
    if(o1<o2)
    {
        cout<<"o2 is big"<<endl;
    }
    else
    {
        cout<<"o1 is big"<<endl;
    }
    if(o1==o2)
    {
        cout<<"both are same"<<endl;
    }
    else
    {
        cout<<"both are difference"<<endl;
    }
    if(o1!=o2)
    {
        cout<<"not equal"<<endl;
    }
    else
    {
        cout<<"equal"<<endl;
    }


}
