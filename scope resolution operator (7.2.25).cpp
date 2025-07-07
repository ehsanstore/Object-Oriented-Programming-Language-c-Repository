#include<iostream>
using namespace std;
class Box
{
public:
    int l,w,h;
    void print_volume();
};
void Box::print_volume()
{
    int volume=l*w*h;
    cout<<"volume of the box :"<<volume;
}
int main()
{
    Box ob;
    ob.l=5;
    ob.w=10;
    ob.h=10;
    ob.print_volume();
}
