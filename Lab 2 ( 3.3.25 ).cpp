/*2. You are required to implement two classes, Varsity and Department. The Varsity
class contains a private member ‘name’ and a protected member ‘location’.
Implement a default constructor in this class to set the value of name and
location. The Department class has a member function ‘Print’, which takes an
object of type Varsity as a parameter and is declared as a friend of the Varsity
class, allowing it to access the private and protected members of Varsity. In the
main function, create an object of Varsity and an object of Department. Use the
Print function to output the values of the name and location of the Varsity object.*/

#include<iostream>
#include<string>
using namespace std ;
class Varsity;
class Department
{
public:
    void Print(Varsity &obj);
};
class Varsity
{
    string name;
protected:
    string location;
public:
    Varsity(string n,string l)
    {
        name=n;
        location=l;
    }
    friend void Department::Print(Varsity &obj);
};
void Department::Print(Varsity &obj)
{
    cout<<"Varsity Name : "<<obj.name<<endl<<"Location : "<<obj.location<<endl;
}

int main()
{
    string x,y;
    cout<<"Name : ";
    cin>>x;
    cout<<"Location : ";
    cin>>y;
    Varsity object1(x,y);
    Department object2;
    object2.Print(object1);
}


