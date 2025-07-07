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
    ex.values("S.M.Ehsanul Hoque Rafi",20244103077,80,80,80);
    ex.displayinfo();


}




