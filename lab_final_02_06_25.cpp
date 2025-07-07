/*#include<iostream>
using namespace std;
class Circle
{
    float radius;
    public:
    void getradius(float r)
    {
        radius=r;
    }
    Circle operator++()
    {
        ++radius;
        return *this;
    }
    Circle operator--(int)
    {
        Circle temp=*this;
        temp.radius=radius--;
        return temp;
    }
    void display()
    {
        cout<<"Radius : "<<radius<<endl;
    }

};

int main()
{
    Circle C1;
    C1.getradius(10.0);
    C1--;;
    C1.display();
    ++C1;
    C1.display();
}*/

/*#include <iostream>
using namespace std;
class Technical
{
    string skill;

public:
    Technical(string s)
    {
        skill = s;
    }
    void display1()
    {
        cout << "Skill : " << skill << endl;
    }
};

class Managedrial
{
    int num;

public:
    Managedrial(int n = 0)
    {
        num = n;
    }
    void display2()
    {
        cout << "Number of Team Members : " << num << endl;
    }
};

class TechManager : public Technical, public Managedrial
{
public:
    TechManager(string s, int n) : Technical(s), Managedrial(n)
    {
    }
    void display3()
    {
        display1();
        display2();
    }
};

int main()
{
    TechManager obj("No Skill", 10);
    obj.display3();
}*/

#include <iostream>
using namespace std;
class Math
{
    int x, y;

public:
    Math(int a = 0, int b = 0)
    {
        x = a;
        y = b;
    }
    friend Math operator-(Math obj, int i);
    void display()
    {
        cout << "X : " << x << endl << "Y : " << y << endl;
    }
};

Math operator-(Math obj, int i)
{
    Math temp;
    temp.x = obj.x - i;
    temp.y = obj.y - i;
    return temp;
}
int main()
{
    Math o1(43, 43);
    Math o2 = o1 - 43;
    o2.display();
}