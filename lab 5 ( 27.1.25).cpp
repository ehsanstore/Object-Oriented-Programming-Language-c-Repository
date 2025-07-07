#include<iostream>
using namespace std;
class Student
{
private:
    string name;
    long long int roll_number;
    double physics;
    double chemistry;
    double math;
public:
    void values(string n,long long int r,double p,double c,double m)
    {
        name=n;
        roll_number=r;
        physics=p;
        chemistry=c;
        math=m;
    }
    string Name()
    {
        return name;
    }
    long long int Roll()
    {
        return roll_number;
    }
    double Total()
    {
        return(physics+chemistry+math);
    }
    double Average()
    {
        return ((physics+chemistry+math)/3);
    }
    void displayinfo()
    {
        cout<<"Name : "<<Name()<<endl<<"Id : "<<Roll()<<endl<<"Total Value : "<<Total()<<endl<<"Average : "<<Average()<<endl;

    }
};

int main()
{
    Student ex;
    string ch;
    long long int a;
    double b,c,d;
    getline(cin,ch);
    cin>>a>>b>>c>>d;
    ex.values(ch,a,b,c,d);
    ex.displayinfo();


}





