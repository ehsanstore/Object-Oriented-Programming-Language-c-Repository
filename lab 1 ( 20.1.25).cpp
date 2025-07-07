#include<iostream>
//using namespace std;
int main()
{
    float n,i,sum=0.0;
    std::cout<<"Upto n numbers : ";
    std::cin>>n;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    std::cout<<sum;

}

            //another way

#include<iostream>
using namespace std;
int main()
{
    float n,i,sum=0.0;
    cout<<"Upto n numbers : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<sum;

}

