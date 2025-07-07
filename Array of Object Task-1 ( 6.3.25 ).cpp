/*Define a class Student that represents a student with the following attributes:
name, age, and grade.

Implement a parameterized constructor to initialize name, age, and grade.

Implement a method displayInfo() to print student details.

Create an array of Student objects and initialize it with data.*/

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int age;
    char grade;

public:

    Student(string n, int a, char g)
    {
        name = n ;
        age = a ;
        grade = g ;
    }
    void displayInfo()
    {
        cout << "Name: " << name << ", Age: " << age << ", Grade: " << grade << endl;
    }
};

int main()
{
    Student students[3] =
    {
        Student("Alice", 18, 'A'),
        Student("Bob", 19, 'B'),
        Student("Charlie", 20, 'C')
    };

    for (int i = 0; i < 3; ++i)
    {
        students[i].displayInfo();
    }

}
