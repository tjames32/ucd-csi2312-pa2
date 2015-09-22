//
// Created by Tyler on 9/21/2015.
//

#ifndef CODE_POINT_H
#define CODE_POINT_H

namespace;

class Point
{
    private:
        double dim;

    public:

        //Point();

        double [] coordinates;
        int dimensions;
    
        Point(int dim, double[] array)
            {
                 coordinates = new [dim];
        
                for(int i = 0; i < dim[]; i++)
                coordinates[i] = array[i];
            }

    double distanceTo(Point* nextPoint)
        {
            int dim = min(nextPoint->coordinates[i] - coordinates[i]);
        }

    

};
