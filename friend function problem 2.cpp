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

   friend coord operator +(coord obj,int i);
   friend coord operator +(int i,coord obj);
    void display()
    {
        cout<<" Value X: " <<x<< " , Y: "<<y<<"\n";
    }

};
coord operator +( coord obj , int i)
{
    coord temp;
    temp.x=obj.x+i;
    temp.y=obj.y+i;
    return temp;
}
coord operator +(int i,coord obj)
{
    coord temp;
    temp.x=i+obj.x;
    temp.y=i+obj.y;
    return temp;
}

int main()
{
    coord o1(10,10);
    coord o2= o1+10;
    o2.display();
    o2=99+o2;
    o2.display();

}

