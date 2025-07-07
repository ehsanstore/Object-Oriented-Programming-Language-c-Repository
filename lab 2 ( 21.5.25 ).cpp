/*#include<iostream>
using namespace std;
class Temperature
{
    float x,c1,c2;
public:
    Temperature()
    {
        x=0;
    }
    Temperature(float c)
    {
        x=c;
    }
    float calculate1()
    {
        c1=((9*x+160)/5);
    }
    float calculate2()
    {
        c2=5*((x-32)/9);
    }
    float display1()
    {
        cout<<"Value of fahrenheit :"<<c1<<endl;
    }
    float display2()
    {
        cout<<"Value of celcius :"<<c2<<endl;
    }

};
int main()
{
    Temperature obj(10);
    obj.calculate1();
    obj.calculate2();
    obj.display1();
    obj.display2();

}*/

#include<iostream>
using namespace std;
class Temperature
{
    float x,c1,c2;
public:
    Temperature()
    {
        x=0;
    }
    float calculate1(float c)
    {
        x=c;
        c1=((9*x+160)/5);
    }
    float calculate2(float c)
    {
        x=c;
        c2=5*((x-32)/9);
    }
    void display1()
    {
        cout<<"Value of fahrenheit :"<<c1<<endl;
    }
    void display2()
    {
        cout<<"Value of celcius :"<<c2<<endl;
    }

};
int main()
{
    Temperature obj;
    obj.calculate1(10);
    obj.calculate2(10);
    obj.display1();
    obj.display2();

}
