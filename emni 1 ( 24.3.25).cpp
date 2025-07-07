/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<0)
    {
        cout<<abs(n);
    }
    else
    {
        cout<<n;
    }
}*/


/*#include<iostream>
using namespace std;
int main()
{
    char n;
    cin>>n;
    n=tolower(n);
    if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
    {
        cout<<"vowel";
    }
    else
    {
        cout<<"consonant";
    }
}*/



/*#include<iostream>
using namespace std;
int main()
{
    char n;
    cin>>n;
    n=toupper(n);
    if(n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
    {
        cout<<"vowel";
    }
    else
    {
        cout<<"consonant";
    }
}*/

// Conditional operator
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any integer : ";
    cin>>n;
    (n%2==0)?cout<<n<<" is even " : cout<<n<<" is odd " ;
}




