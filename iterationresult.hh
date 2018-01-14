#ifndef ITERATIONRESULT_HH
#define ITERATIONRESULT_HH

#include<math.h>
#include"Point.hh"

class IterationResult{
    Point _oldPoint;
    int _counter;

public:
    IterationResult(Point oldPoint, int counter): _oldPoint(oldPoint), _counter(counter) {}

    Point oldPoint() const {return _oldPoint;}
    int counter() const {return _counter;}
};

IterationResult iterate(Point z, Point c, double threshold, int maxIt){
    int counter = 0;
    Point oldPoint = z;

    while (distance(z, oldPoint) < threshold && counter < maxIt){
        Point newPoint(pow(oldPoint.x(), 2) - pow(oldPoint.y(), 2) + c.x(), 2 * oldPoint.x() * oldPoint.y() + c.y());

        oldPoint = newPoint;;
        counter++;
    }

    return IterationResult(oldPoint, counter);
}

#endif