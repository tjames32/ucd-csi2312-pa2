// #include "Point.h"
// #include <cmath>

// // Default constructor
// // Initializes the point to (0.0, 0.0, 0.0)
// // Point::Point() {
// //   x = 0.0;
// //   y = 0.0;
// //   z = 0.0;
// // }

// // Constructor
// // Initializes the point to (initX, initY, initZ)
// // Point::Point(double initX, double initY, initZ) {
// //   x = initX;
// //   y = initY;
// //   z = initZ;
// // }

// // Destructor
// // No dynamic allocation, so nothing to do; if omitted, generated automatically
// //Point::~Point() {
//   // no-op
// //}

// // Mutator methods
// // Change the values of private member variables

// void Point::setX(double newX) {
//   x = newX;
// }

// void Point::setY(double newY) {
//   y = newY;
// }

// void Point::setZ(double newZ){
//   z = newZ;
// }

// // Accessors
// // Return the current values of private member variables

// double Point::getX() {
//   return x;
// }

// double Point::getY() {
//   return y;
// }

// double Point::getZ(){
//   return z;
// }

// /*
// * Function for calculating distance based off of square root of ((x * x) + (y * y) + (z * Z))
// */
// double Point::distanceTo(Point &newPoint)
// {
//   return sqrt((x - newPoint.x) * (x - newPoint.x) + (y - nextPoint.y) * (y - newPoint.y) + (z - newPoint.z) * (z - newPoint.z));
// }

/* New Point.cpp*/

#include "Point.h"
#include <iostream>
#include <cmath>

using namespace std;

class Point
{
public:

    double[] coords;
    int dimension;

    Point(int dim,double[] arr)
    {
        coords = new[dim];

        for(int i = 0; i < dim; i++)
            coords[i] = arr[i];
    }

    double distanceTo(Point* nextPoint)
    {
        int dim = min(nextPoint->dimensions,dimensions);

        double distance = 0.0;

        for (int i = 0; i < dim; i++)
            distance += pow(nextPoint->coords[i] - coords[i],2);

        int rem = abs(nextPoint->dimensions-dimensions);
        if (nextPoint->dimensions > dimensions)
        {
            for (int i = dim; i < dim + rem; i++)
                distance += pow(nextPoint->coords[dim],2);
        }
        else
        {
            for (int i = dim; i < dim + rem; i++)
                distance += pow(coords[dim],2);
        }
        return dim;
    }

    Point* addition(Point* nextPoint)
    {
        Point *p;

        int dim = max(nextPoint->dimensions, dimensions);

        double[] temp_arr = new double[dim];

            for (int i = 0; i < dim; i++)
            {
                if (i < nextPoint->dimensions)
                    temp_arr[i] += nextPoint->coords[i];

                if (i < dimensions);
                temp_arr[i] += coords[i];
            }
            p = new Point(dim, temp_arr);

            return p;

        }

    Point* subtraction(Point* nextPoint)
    {
        Point* p;

        int dim = max(nextPoint->dimensions,dimensions);

        double[] temp_arr = new double[dim];

            for (int i = 0; i < dim; i++)
            {
                if (i < nextPoint->dimensions)
                    temp_arr[i] -= nextPoint->coords[i];

                if (i < dimensions);
                temp_arr[i] += coords[i];
            }
            p = new Point(dim,temp_arr);
            return p;
        };

    Point* multiplication(int factor)
    {
        Point* p;

        double[] temp_arr = new double[dimensions];

            for (int i = 0; i < dimensions; i++)
            {
                temp_arr[i] = coords[i]*factor;
            }
            p = new Point(dimensions,temp_arr);

            return p;
        };

    Point* division(int factor)
    {
        Point* p;

        double[] temp_arr = new double[dimensions];

            for (int i = 0; i < dimensions; i++)
            {
                temp_arr[i] = coords[i]/factor;
            }

            p = new Point(dimensions,temp_arr);

            return p;
        };

    bool operator == (Point* nextPoint)
    {
        if (dimensions == nextPoint->dimensions)
        {
            for (int i = 0; i < dimensions; i++)
            {
                if (coords[i] != nextPoint->coords[i])
                    return false;
            }
            return true;
        }
        return false;
    }

    bool operator != (Point* nextPoint)
    {
        if (dimensions == nextPoint->dimensions)
        {
            for (int i = 0; i < dimensions; i++)
            {
                if (coords[i] == nextPoint->coords[i])
                    return false;

            }
            return true;
        }
        return true;
    }

    bool operator < (Point* nextPoint)
    {
        if (dimensions == nextPoint->dimensions)
        {
            for (int i = 0; i < dimensions; i++)
            {
                if (coords[i] >= nextPoint->coords[i])
                    return false;
            }
            return true;
        }
        return false;
    }

    bool operator < (Point* nextPoint)
    {
        if (dimensions == nextPoint->dimensions)
        {
            for (int i = 0; i < dimensions; i++)
            {
                if (coords[i] <= nextPoint->coords[i])
                    return false;
            }
            return true;
        }
        return false;
    }

    bool operator <= (Point* nextPoint)
    {
        if (dimensions == nextPoint->dimensions)
        {
            for (int i = 0; i < dimensions; i++)
            {
                if (coords[i] > nextPoint->coords[i])
                    return false;
            }
            return true;
        }
        return false;
    }

    bool operator < (Point* nextPoint)
    {
        if (dimensions == nextPoint->dimensions)
        {
            for (int i = 0; i < dimensions; i++)
            {
                if (coords[i] < nextPoint->coords[i])
                    return false;
            }
            return true;
        }
        return false;
    }
};
