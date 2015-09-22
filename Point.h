//
// Created by Tyler on 9/21/2015.
//

#ifndef CODE_POINT_H
#define CODE_POINT_H

#endif //CODE_POINT_H

class Point
{
private:
    double x_coord;
    double y_coord;
    double z_coord;

public:
    Point();

    Point(double x, double y, double z);

    ~Point();

    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);

    double getX();
    double getY();
    double getZ();

    double distanceTo(Point &nextPoint);

};
