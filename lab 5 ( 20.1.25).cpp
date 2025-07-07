#include<iostream>
using namespace std;
int factorial (int x)
{
    if((x==0)||(x==1))
    {
        return 1;
    }
    return x*factorial(x-1);
}
int main()
{
    int num;
    cout<<"Enter a Number : ";
    cin>>num;
    cout<<"factorial of "<< num <<" is : "<< factorial(num)<<endl;

}
