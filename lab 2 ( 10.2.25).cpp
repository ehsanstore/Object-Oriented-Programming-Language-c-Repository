#include<iostream>
#include<string>
using namespace std;
class BankAccount
{
private:
    long long int account_number,balance;
public:
    BankAccount(long long int x,long long int y)
    {
        account_number=x;
        balance=y;
    }
    ~BankAccount()
    {
        cout<<"Account is closed"<<endl;
    }
    void display()
    {
        cout<<"Account Number : "<<account_number<<endl<<"Balance : "<<balance<<endl;
    }

};
int main()
{
    long long int a;
    cin>>a;
    BankAccount obj(a,10000);
    obj.display();

}

