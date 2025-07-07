#include <iostream>
using namespace std;

class coord
{
    int x, y; // coordinate values
public:
    // Default constructor
    coord()
    {
        x = 0;
        y = 0;
    }

    // Parameterized constructor
    coord(int i, int j)
    {
        x = i;
        y = j;
    }

    // Overload == operator
    int operator == (coord  ob2)
    {
        return (x == ob2.x) && (y == ob2.y);
    }

    // Overload && operator
    int operator && (coord  ob2)
    {
        return (x && ob2.x) && (y && ob2.y);
    }
};

int main()
{
    coord o1(10, 10), o2(5, 3), o3(10, 10);

    // == Operator check
    if (o1 == o2)
    {
        cout << "o1 same as o2\n";
    }
    else
    {
        cout << "o1 and o2 differs \n";
    }

    if (o1 == o3)
    {
        cout << "o1 same as o3\n";
    }
    else
    {

        cout << "o1 and o3 differ \n";
    }

    // && Operator check
    if (o1 && o2)
    {
        cout << "o1 && o2 is true \n";
    }
    else
    {
        cout << "o1 && o2 is false \n";
    }

    if (o1 && o3)
    {
        cout << "o1 && o3 is true \n";
    }
    else
    {
        cout << "o1 && o3 is false \n";
    }

    return 0;
}
