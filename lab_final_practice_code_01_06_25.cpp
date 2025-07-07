/*#include <iostream>
using namespace std;
class complex
{
    int real,imag;
    public:
    complex(int r=0, int i =0)
    {
        real=r;
        imag=i;
    }
    complex operator + ( complex const &obj)
    {
        complex temp;
        temp.real=real+obj.real;
        temp.imag=imag+obj.imag;
        return temp;
    }
    void print()
    {
        cout<<real<<"+i"<<imag<<endl;
    }
};
int main()
{
    complex o1(10,5),o2(2,4);
    complex o3=o1+o2;
    o3.print();

}*/

/*#include <iostream>
using namespace std;
class complex
{
    int feet,inch;
    public:
    complex(int f=0, int i =0)
    {
        feet=f;
        inch=i;
    }
    complex operator + ( complex const &obj)
    {
        complex temp;
        temp.feet=feet+obj.feet;
        temp.inch=inch+obj.inch;
        return temp;
    }
    void print()
    {
        cout<<feet<<"'"<<inch<<endl;
    }
};
int main()
{
    complex o1(8,9),o2(10,2);
    complex o3=o1+o2;
    o3.print();

}*/

/*#include <iostream>
using namespace std;
class complex
{
    int r;
    public:
   void input()
   {
        cout<<"Enter the number :";
        cin>>r;
   }
    complex operator + ( complex const &obj)
    {
        complex temp;
        temp.r=r+obj.r;
        return temp;
    }
    void print()
    {
        cout<<"Sum of Two Object :"<<r<<endl;
    }
};
int main()
{
    complex o1,o2;
    o1.input();
    o2.input();
    complex o3=o1+o2;
    o3.print();

}*/

/*#include <iostream>
using namespace std;
class coord
{
    int x, y;

public:
    coord(int a = 0, int b = 0)
    {
        x = a;
        y = b;
    }
    int operator==(coord const &obj)
    {
        return (x == obj.x) && (y == obj.y);
    }
    int operator&&(coord const &obj)
    {
        return (x && obj.x) && (y && obj.y);
    }
};

int main()
{
    coord o1(10, 10), o2(5, 3), o3(10, 10);
    if (o1 == o2)
    {
        cout << "both equal\n";
    }
    else
    {
        cout << "not equal\n";
    }
    if (o1 == o3)
    {
        cout << "both equal\n";
    }
    else
    {
        cout << "not equal\n";
    }
    if (o1 && o2)
    {
        cout << "both are non zero\n";
    }
    else
    {
        cout << "zero\n";
    }
    if (o1 && o3)
    {
        cout << "both are non zero\n";
    }
    else
    {
        cout << "zero\n";
    }
}*/

/*#include <iostream>
using namespace std;
class complex
{
    int real, imag;

public:
    complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    complex operator+(complex const &obj)
    {
        complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
    complex operator-(complex const &obj)
    {
        complex temp;
        temp.real = real - obj.real;
        temp.imag = imag - obj.imag;
        return temp;
    }
    complex operator*(complex const &obj)
    {
        complex temp;
        temp.real = ((real * obj.real) - (imag * obj.imag));
        temp.imag = ((real * obj.imag) + (imag * obj.real));
        return temp;
    }
    void print1()
    {
        cout << real << "+i" << imag << endl;
    }
    void print2()
    {
        cout << real << "-i" << imag << endl;
    }
    void print3()
    {
        cout << real << "*i" << imag << endl;
    }
};
int main()
{
    complex o1(10, 8), o2(9, 7), o3, o4, o5;
    o3 = o1 + o2;
    o3.print1();
    o4 = o1 - o2;
    o4.print2();
    o5 = o1 * o2;
    o5.print3();
}*/

/*#include <iostream>
using namespace std;
class Distance
{
    int feet, inch;

public:
    Distance(int f = 0, int i = 0)
    {
        feet = f;
        inch = i;
    }
    void operator--()
    {
        --feet;
        --inch;
    }
    void display()
    {
        cout << feet << "'" << inch << endl;
    }
};
int main()
{
    Distance o1(8, 9);
    --o1;
    o1.display();
}*/

/*#include <iostream>
using namespace std;
class Distance
{
    int feet, inch;

public:
    Distance(int f = 0, int i = 0)
    {
        feet = f;
        inch = i;
    }
    Distance operator--()
    {
        --feet;
        --inch;
        return *this;
    }
    void display()
    {
        cout << feet << "'" << inch << endl;
    }
};
int main()
{
    Distance o1(8, 9);
    --o1;
    o1.display();
}*/

/*#include <iostream>
using namespace std;
class Distance
{
    int feet, inch;

public:
    Distance(int f = 0, int i = 0)
    {
        feet = f;
        inch = i;
    }
    void operator--();
    void display()
    {
        cout << feet << "'" << inch << endl;
    }
};
void Distance :: operator--()
{
    --feet;
    --inch;
}
int main()
{
    Distance o1(8, 9);
    --o1;
    o1.display();
}*/

/*#include <iostream>
using namespace std;
class Distance
{
    int feet, inch;

public:
    Distance(int f = 0, int i = 0)
    {
        feet = f;
        inch = i;
    }
    Distance operator--();
    void display()
    {
        cout << feet << "'" << inch << endl;
    }
};
Distance Distance ::operator--()
{
    --feet;
    --inch;
    return *this;
}
int main()
{
    Distance o1(8, 9);
    --o1;
    o1.display();
}*/

/*#include <iostream>
using namespace std;
class Distance
{
    int feet, inch;

public:
    Distance(int f = 0, int i = 0)
    {
        feet = f;
        inch = i;
    }
    Distance operator++();
    void display()
    {
        cout << feet << "'" << inch << endl;
    }
};
Distance Distance ::operator++()
{
    ++feet;
    ++inch;
    return *this;
}
int main()
{
    Distance o1(10,10);
    ++o1;
    o1.display();
}*/

/*#include <iostream>
using namespace std;
class coord
{
    int x, y;

public:
    coord(int a = 0, int b = 0)
    {
        x = a;
        y = b;
    }
    friend coord operator+(coord ob1, coord ob2);
    void display()
    {
        cout << "X :" << x << " " << "Y :" << y << endl;
    }
};
coord operator+(coord ob1, coord ob2)
{
    coord temp;
    temp.x = ob1.x + ob2.x;
    temp.y = ob1.y + ob2.y;
    return temp;
}
int main()
{
    coord o1(10, 10), o2(5, 3);
    coord o3 = o1 + o2;
    o3.display();
}*/

/*#include <iostream>
using namespace std;
class coord
{
    int x, y;

public:
    coord(int a=0,int b=0)
    {
        x = a;
        y = b;
    }
    friend coord operator+(coord obj,int i);
    friend coord operator+(int i,coord obj);
    void display()
    {
       cout << "X :" << x << " " << "Y :" << y << endl;
    }
};
coord operator+(coord obj,int i)
{
    coord temp;
    temp.x = obj.x + i;
    temp.y = obj.y + i;
    return temp;
}
coord operator+(int i,coord obj)
{
    coord temp;
    temp.x = i+obj.x;
    temp.y = i+obj.y;
    return temp;
}
int main()
{
    coord o1(10, 10), o2;
    o2=o1+10;
    o2.display();
    o2=99+o2;
    o2.display();
}*/

/*#include<iostream>
using namespace std;
class top
{
    int meters;
    public:
    top(int m=0)
    {
        meters=m;
    }
    top operator++()
    {
        ++meters;
        return *this;
    }
    top operator++(int)
    {
        top temp=*this;
        temp.meters=meters++;
        return temp;
    }
    top operator--()
    {
        --meters;
        return *this;
    }
    top operator--(int)
    {
        top temp = *this;
        temp.meters = meters--;
        return temp;
    }
    void display()
    {
        cout<<"Distance : "<<meters<<"meters"<<endl;
    }
};
int main()
{
    top o1(5),o2,o3,o4,o5;
    o2=++o1;
    o1.display();
    o2.display();
    o3=o1++;
    o1.display();
    o3.display();
    o4=--o1;
    o1.display();
    o4.display();
    o5=o1--;
    o1.display();
    o5.display();

}*/

