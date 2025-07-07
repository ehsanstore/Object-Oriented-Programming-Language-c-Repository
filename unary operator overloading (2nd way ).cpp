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

    coord operator++();
    void print()
    {
        cout<<" (++ o1) X: " <<x<< " , Y: "<<y<<"\n";
    }

};
coord coord :: operator ++()
{
    this->x++;
    this->y++;
    return *this;
}
int main()
{
    coord o1(10,10);
    ++o1;
    o1.print();

}

