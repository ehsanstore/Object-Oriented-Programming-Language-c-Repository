/*#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter two values : ";
    cout<<showpoint;
    float n1,n2,sum1,sub1;
    cin>>n1>>n2;
    sum1=n1+n2;
    cout<<"Summation 1 is :"<<sum1<<endl;

    cout<<noshowpoint;
    sub1=n1-n2;
    cout<<"Subtraction 1 is :"<<sub1;

}*/

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<"Enter two values : ";
    cout<<fixed;
    cout<<setprecision(2);
    float n1,n2,sum,sub,multi,div;
    cin>>n1>>n2;
    sum=n1+n2;
    cout<<setw(20)<<"Summation  is :"<<sum<<endl;


    sub=n1-n2;
    multi=n1*n2;
    div=n1/n2;
    cout<<setw(20)<<"Subtraction  is :"<<sub<<"\n";
    cout<<setw(20)<<"Multiplication  is :"<<multi<<"\n";
    cout<<setw(20)<<"Division is :"<<div<<"\n";


}

