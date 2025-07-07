/*#include<iostream>
#include<string.h>
using namespace std;
class Car
{
public:
    string brand;
    string model;
    int year;
    void displayinfo()
    {
        cout<<brand<<" "<<model<<" "<<year<<endl;
    }
};
int main()
{
    Car mycar;
    mycar.brand="Toyota";
    mycar.model="Prado";
    mycar.year=2020;
    mycar.displayinfo();

}*/

            // same type problem




#include<iostream>
#include<string.h>
using namespace std;
class Student
{
private:
    string Name;
    int Age;
    long long int Id;
    void displayinfo()
    {
        cout<<Name<<endl<<Age<<endl<<Id<<endl;
    }
};
int main()
{
    Student Ehsan;
    /*Ehsan.Name="Rafi";
    Ehsan.Age=20;
    Ehsan.Id=20244103077;
    Ehsan.displayinfo();*/

}
