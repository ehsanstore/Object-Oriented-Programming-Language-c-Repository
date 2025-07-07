#include<iostream>
using namespace std;
class Book
{
public:
    string tittle;
    string author;
    int publication_year;
    void displayinfo()
    {
        cout<<"Book Name : "<<tittle<<endl<<"Author Name : "<<author<<endl<<"Publication Year : "<<publication_year<<endl;

    }
};

int main()
{
    Book book;
    book.tittle="Zoology";
    book.author="Gazi Azmol";
    book.publication_year=2023;
    book.displayinfo();


}


