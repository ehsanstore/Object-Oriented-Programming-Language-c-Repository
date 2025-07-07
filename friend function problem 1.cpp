#include<iostream>
using namespace std;
class coord
{
    int x,y;
public:
    coord()
    {
        x=0;
        y=0;

    }
    coord(int i, int j)
    {
        x=i;
        y=j;

    }

   friend coord operator +(coord ob1,coord ob2);
    void display()
    {
        cout<<" (o1+o2) X: " <<x<< " , Y: "<<y<<"\n";
    }

};
coord operator +( coord ob1 , coord ob2)
{
    coord temp;
    temp.x=ob1.x+ob2.x;
    temp.y=ob1.y+ob2.y;
    return temp;
}
int main()
{
    coord o1(10,10),o2(5,3),o3;
    o3=o1+o2;
    o3.display();

}
