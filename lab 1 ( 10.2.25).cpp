#include<iostream>
#include<string>
using namespace std;
class Book
{
private:
    string title,author;
    int publication_year;
public:
    Book()
    {
        title="Zoology";
        author="Gazi Azmol";
        publication_year=2023;
        cout<<"Ami Default Constructor"<<endl;
    }
    ~Book()
    {
        cout<<"Ami Destructor"<<endl;
    }
    void display()
    {
        cout<<"Tittle : "<<title<<endl<<"Author : "<<author<<endl<<"Publication Year : "<<publication_year<<endl;
    }

};
int main()
{
    Book obj;
    obj.display();
}
