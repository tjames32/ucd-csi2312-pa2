

#include "Point.h"
#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    Point p;


//Using Heron's formula to find area of the triangle
//by making a double 's' to use in the formula
    double computeArea(Point &a, Point &b, Point &c)
    {
        double s = (a.distanceTo(b) + b.distanceTo(c) + c.distanceTo(a)) * 0.5;

        return sqrt(s * (s - a.distanceTo(b)) * (s - b.distanceTo(c)) * (s - c.distanceTo(a)));
    }


    int main(void)
    {
        double x, y, z;

        //first coordinate set of the first point of the triangle
        cout << "Please input the coordinates of the first point of the triangle (x, y, z): " << endl;
        cin >> x;
        cin >> y;
        cin >> z;

        Point one = Point(x, y, z);

        cout << "Please input the coordinates of the second point of the triangle (x, y, z): " << endl;
        cin >> x;
        cin >> y;
        cin >> z;

        Point two = Point(x, y, z);

        cout << "Please input the coordinates of the final point of the triangle (x, y, z): " << endl;
        cin >> x;
        cin >> y;
        cin >> z;

        Point three = Point(x, y, z);

        //calculating area with area function
        double area = computeArea(one, two, three);

        cout << "The area of this triangle is: " << area << endl;
        return 0;
    }
