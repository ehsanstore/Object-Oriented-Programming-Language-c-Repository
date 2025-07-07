/*1. Implement a DAY class with attributes days, months, and years. Then,
implement a nonmember function that takes two TIME objects as
parameters, calculates the difference between them in seconds, and returns
a new TIME object representing the difference.*/

#include <iostream>
using namespace std;

class DATE
{
private:
    int day;
    int month;
    int year;

public:
    // Constructor to initialize day, month, and year
    DATE(int d = 0, int m = 0, int y = 0)
    {
        day = d;
        month = m;
        year = y;
    }

    // Function to display the date
    void display()
    {
        cout << day << " days " << month << " months " << year << " years" << endl;
    }

    // Friend function to calculate the difference between two DATE objects
    friend DATE dateDifference(DATE d1, DATE d2);
};

// Friend function definition
DATE dateDifference( DATE d1, DATE d2)
{
    // Convert both dates to total days
    int date1 = d1.year * 365 + d1.month * 30 + d1.day; // Simplified calculation
    int date2 = d2.year * 365 + d2.month * 30 + d2.day; // Simplified calculation

    // Calculate the absolute difference in days
    int diff = abs(date1 - date2);

    // Convert the difference back to years, months, and days
    int y = diff / 365;
    int remaining = diff % 365;
    int m = remaining / 30;
    int d = remaining % 30;

    // Create a new DATE object with the difference
    DATE result(d, m, y);
    return result;
}

int main()
{
    // Create two DATE objects
    DATE obj1(15, 8, 1947); // Independence Day of India
    DATE obj2(26, 1, 1950); // Republic Day of India

    // Calculate the difference between the two dates
    DATE diff = dateDifference(obj1,obj2);

    // Display the difference
    cout << "Date difference: ";
    diff.display();

    return 0;
}































