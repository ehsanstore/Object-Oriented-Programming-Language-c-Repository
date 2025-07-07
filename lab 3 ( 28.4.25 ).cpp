#include<iostream>
using namespace std;
class  Vector
{
    int x,y;
public:
    Vector()
    {
        x=0;
        y=0;
    }
    Vector(int a,int b)
    {
        x=a;
        y=b;
    }
    friend Vector operator--(Vector obj);
    friend Vector operator+(Vector obj1,Vector obj2);
    void display()
    {
        cout<<"Ans : "<<x<<" , "<<y<<endl;
    }
};
Vector operator--(Vector obj)
{
    Vector temp;
    temp.x=--obj.x;
    temp.y=--obj.y;
    return temp;
}
Vector operator+(Vector obj1,Vector obj2)
{
    Vector temp;
    temp.x=obj1.x+obj2.x;
    temp.y=obj1.y+obj2.y;
    return temp;
}
int main()
{
    Vector o1(5,5),o2(10,10);
    Vector o3=--o1;
    o1.display();
    o3.display();
    Vector o4=--o2;
    o2.display();
    o4.display();
    Vector o5=o1+o2;
    o5.display();
}
