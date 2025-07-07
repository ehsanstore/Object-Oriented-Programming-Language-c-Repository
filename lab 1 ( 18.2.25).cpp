#include<iostream>
using namespace std;
struct Employee
{
    double basic_salary,DA,HRA,gross_salary;
    string name;
    long long int id;
};
int main()
{
    struct Employee em;
    long long int a;
    double b,c,d;
    string ch;
    getline(cin,ch);
    cin>>a>>b>>c>>d;
    em.name=ch;
    em.id=a;
    em.basic_salary=b;
    em.DA=c;
    em.HRA=d;
    em.gross_salary=b+c+d;
    cout<<"Name : "<<em.name<<endl;
    cout<<"ID : "<<em.id<<endl;
    cout<<"Basic Salary : "<<em.basic_salary<<endl;
    cout<<"DA : "<<em.DA<<endl;
    cout<<"HRA : "<<em.HRA<<endl;
    cout<<"Gross Salary : "<<em.gross_salary<<endl;
}

