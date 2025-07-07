#include<iostream>
using namespace std;
class student
{
    int english,math;
public:
    student(int e,int m)
    {
        english=e;
        math=m;
    }
    student operator=(student &s)
    {
        if(this!=&s)
        {
            english=s.english;
            math=s.math;
        }
        return *this;
    }
    void marks()
    {
        cout<<"English: "<<english<<" , Math: "<<math<<endl;
    }
};
int main()
{
    student s1(6,2),s2(5,10);
    cout<<"Student 1 Marks : ";
    s1.marks();
    cout<<"Student 2 Marks : ";
    s2.marks();
    s1=s2;
    cout<<endl;
    cout<<"Student 1 Marks : ";
    s1.marks();
    cout<<"Student 2 Marks : ";
    s2.marks();

}
