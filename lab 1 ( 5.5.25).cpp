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
    coord(int a,int b)
    {
        x=a;
        y=b;
    }
    friend coord operator-(int i,coord obj);
    void display()
    {
        cout<<"Value :"<<x<<" "<<y<<endl;
    }
};
coord operator-(int i,coord obj)
{
    coord temp;
    temp.x=i-obj.x;
    temp.y=i-obj.y;
    return temp;
}
int main()
{
    coord o1(10,10);
    coord o2=45-o1;
    o2.display();
}
