#ifndef ITERATIONRESULT_HH
#define ITERATIONRESULT_HH

#include<math.h>
#include"Point.hh"

struct IterationResult{
    int _counter;
    Point _oldPoint;

public:
    IterationResult(int counter, Point oldpoint): _counter(counter), _oldPoint(oldpoint){}

    int counter() const {return _counter;}
    Point lastPoint() const {return _lastPoint;}
};

IterationResult iterate(Point z, Point c, double threshold, int maxIt){
    int counter = 0;
    Point oldPoint = z;
    
    while (distance(z, oldPoint) < threshold && counter < maxIt){
        Point newPoint(pow(oldPoint.x(), 2) - pow(oldPoint.y(), 2) + c.x(), 2 * oldPoint.y(2 * oldPoint.x() * oldPoint.y() + c.y());

        oldPoint = newPoint;;
        counter++;
    }
    return 
}

#endif