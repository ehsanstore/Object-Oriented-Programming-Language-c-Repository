/*1. Implement a TIME class with attributes hours, minutes, and seconds. Then,
implement a nonmember function that takes two TIME objects as
parameters, calculates the difference between them in seconds, and returns
a new TIME object representing the difference.*/

#include <iostream>
using namespace std;

class TIME
{
private:
    int hours;
    int minutes;
    int seconds;

public:

    TIME(int h = 0, int m = 0, int s = 0)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void display()
    {
        cout << hours << " hours " << minutes << " minutes " << seconds << " seconds" << endl;
    }
    friend TIME timeDifference(TIME t1, TIME t2);
};
TIME timeDifference(TIME t1, TIME t2)
{

    int time1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int time2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    int diff = (time1 - time2);
    int h = diff / 3600;
    int remaining = diff % 3600;
    int m = remaining / 60;
    int s = remaining % 60;
    TIME result(h, m, s);
    return result;
}

int main()
{

    TIME obj1(2, 30, 45);
    TIME obj2(1, 15, 20);
    TIME diff = timeDifference(obj1, obj2);
    cout << "Time difference: ";
    diff.display();

    return 0;
}
