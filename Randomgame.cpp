#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    while(1)
    {
        int guessnumber,randomnumber;
        cout<<"Enter your guess between 1 to 5 : ";
        cin>>guessnumber;
        randomnumber=1+rand()%5;
        if(guessnumber==randomnumber)
        {
            cout<<"you have won"<<endl<<endl;
        }
        else
        {
            cout<<"you have lost.try again"<<endl;
            cout<<"Random number was :"<<randomnumber<<endl<<endl;
        }
    }
    getch();
}
