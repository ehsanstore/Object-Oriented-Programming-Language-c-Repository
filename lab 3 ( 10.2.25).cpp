#include<iostream>
#include<string>
using namespace std;
class Product
{
private:
    string productName;
    long long int productId;
    double price;
public:
    Product()
    {
        productName="Unnamed";
        productId=0;
        price=0.0;
        cout<<"Ami Default Constructor"<<endl;
    }
    Product(string x,long long int y,double z)
    {
        productName=x;
        productId=y;
        price=z;
        cout<<"Ami parametrized Constructor"<<endl;
    }
    void displayDetails()
    {
        cout<<"Product Name : "<<productName<<endl<<"Product Id : "<<productId<<endl<<"Price : "<<price<<endl;
    }

};
int main()
{
    string a;
    getline(cin,a);
    long long int b;
    double c;
    cin>>b>>c;
    Product obj1;
    obj1.displayDetails();
    Product obj2(a,b,c);
    obj2.displayDetails();

}


