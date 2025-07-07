#include<iostream>
#include<string>
using namespace std;
class Point
{
private:
    int x,y;
public:
    Point(int a,int b)
    {
        x=a;
        y=b;

    }
    Point(const Point &obj)
    {
        x=obj.x;
        y=obj.y;
    }
   int getx()
   {
       return x;
   }
   int gety()
   {
       return y;
   }

};
int main()
{
    int s,p;
    Point p1(10,15);
    Point p2=p1;
    cout<<"First Constructor : "<<p1.getx()<<" "<<"Second Constructor : "<<p1.gety()<<endl;
    cout<<"Copy Constructor 1 : "<<p2.getx()<<" "<<"Copy Constructor 2 : "<<p2.gety()<<endl;

}


