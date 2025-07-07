/*1.You are required to implement a class, Point2D. The Point2D class contains
private members x and y to represent the coordinates of a point. Implement a
parameterized constructor to initialize these values. There is a global function
calculateDistance(), which takes two Point2D objects as parameters and is
declared as a friend of the Point2D class, allowing it to access the private
members x and y. The calculateDistance() function calculates the distance
between two points in a 2D coordinate system. In the main function, create two
Point2D objects, display their coordinates, and use the calculateDistance()
function to compute and output the distance between the two points.*/
#include<iostream>
#include<cmath>
using namespace std ;
class Point2D
{
private:
    int x,y;
public:
    Point2D(int abseissa,int ordinate)
    {
        x=abseissa;
        y=ordinate;
    }
    friend void calculateDistance(Point2D &obj1,Point2D &obj2);
};
void calculateDistance(Point2D &obj1,Point2D &obj2)
{
    double distance=sqrt(pow(obj2.x-obj1.x,2)+pow(obj2.y-obj1.y,2));
    cout<<"Distance between the two points : "<<distance<<endl;
}
int main()
{
    int s,p,d,f;
    cout<<"Enter the Input : ";
    cin>>s>>p>>d>>f;
    Point2D object1(s,p);
    Point2D object2(d,f);
    calculateDistance(object1,object2);

}
