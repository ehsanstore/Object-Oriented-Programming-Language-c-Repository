#include<iostream>
#include<string>
using namespace std;
class Wall
{
private:
    double length,height,l,h;
public:
    Wall(double len,double hgt)
    {
        length=len;
        height=hgt;

    }
    Wall(const Wall &obj)
    {
        l=obj.length;
        h=obj.height;
        cout<<"Length : "<<l<<" "<<"Height : "<<h<<endl;
    }
   void calculateArea()
   {
       cout<<"Area : "<<length*height<<endl;
   }
   void calculateArea2()
   {
       cout<<"Copy Area : "<<l*h<<endl;
   }
};
int main()
{
   Wall wall1(10.5,8.6);
   Wall wall2=wall1;
   wall1.calculateArea();
   wall2.calculateArea2();
}

