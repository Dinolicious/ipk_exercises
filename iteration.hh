#ifndef ITERATION_HH
#define ITERATION_HH

#include <math.h>
#include "Point.hh"

class IterationResult{
    Point _lastPoint;
    int _counter;

public:
    IterationResult(Point lastPoint, int counter): _lastPoint(lastPoint), _counter(counter) {}

    Point lastPoint() const {return _lastPoint;}
    int counter() const {return _counter;}
};

IterationResult iterate(Point z, Point c, double threshold, int maxIt){
    int counter = 0;
    Point lastPoint = z;

    while (distance(z, lastPoint) < threshold && counter < maxIt){
        Point newPoint(pow(lastPoint.x(), 2) - pow(lastPoint.y(), 2) + c.x(), 2 * lastPoint.x() * lastPoint.y() + c.y());

        lastPoint = newPoint;;
        counter++;
    }

    return IterationResult(lastPoint, counter);
}

#endif