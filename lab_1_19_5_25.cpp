#include <iostream>
using namespace std;
class cylinder
{
    float radius, height;

public:
    void set1(float r, float h)
    {
        radius = r;
        height = h;
    }
    float volume()
    {
        return 3.14 * (radius * radius) * height;
    }
    friend float operator<(cylinder obj1, cylinder obj2);
    friend float operator!=(cylinder obj1, cylinder obj2);
};
float operator<(cylinder obj1, cylinder obj2)
{
    return obj1.volume() < obj2.volume();
}

float operator!=(cylinder obj1, cylinder obj2)
{
    return obj1.volume() != obj2.volume();
}
int main()
{
    cylinder o1, o2;
    o1.set1(1.0, 1.0);
    o2.set1(2.0, 2.0);
    if (o1 < o2)
    {
        cout << "o2 is big\n";
    }
    else
    {
        cout << "o1 is big\n";
    }
    if (o1 != o2)
    {
        cout << "not equal\n";
    }
    else
    {
        cout << "equal\n";
    }
}