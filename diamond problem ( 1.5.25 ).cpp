#include <iostream>
using namespace std;

class Person {
public:
    void display() {
        cout << "I am a Person" << endl;
    }
};

class Student : virtual public Person {
    // virtual inheritance
};

class Employee : virtual public Person {
    // virtual inheritance
};

class TA : public Student, public Employee {
    // Only one Person inherited
};

int main() {
    TA ta;
    ta.display();  // ✅ No error, only one copy of Person
}

