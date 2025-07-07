/*Demonstrate a Product class with attributes product no, name, and price per
product. Create an array of 20 products and allow a user to find a product in a
given budget.*/

#include <iostream>
#include <string>
using namespace std;

class Product
{
public:
    int productNo;
    string name;
    double price;
    void input ()
    {
        cout<<"Enter Product Number :";
        cin>>productNo;
        cout<<"Enter Product Name :";
        cin>>name;
        cout<<"Enter Product Price :";
        cin>>price;
    }

    void display()
    {
        cout << "Product No: " << productNo << ", Name: " << name << ", Price: " << price << endl;
    }
};

int main()
{
    Product products[20] ;
    cout<<"Enter details for 20 products:\n";
    for(int i=0;i<20;i++)
    {
        cout<<"\nProduct"<<(i+1)<<":\n";
        products[i].input();
    }


    double budget;
    cout << "\nEnter your budget(Tk): ";
    cin >> budget;
    int found=1;
    cout<<"\nProducts within budget:\n";
     for(int i=0;i<20;i++)
    {
        if(products[i].price<=budget)
        {
            products[i].display();
            found=0;
        }
    }
    if(found==1)
    {
        cout<<"No products within your budget.\n";
    }



}
