#ifndef ITERATIONRESULT_HH
#define ITERATIONRESULT_HH

#include<math.h>
#include"Point.hh"

class IterationResult{                                                                     //class w lastPoint and Iteration-counter
    Point _lastPoint;
    int _counter;

    public:
        Point lastPoint(0) const{                                                           //
            return _lastPoint;
        }
        int counter() const{
            return _counter;
        }
        void iterate( Point, Point, double, int);
}

void IterationResult::iterate(Point z, Point c, double threshold, int maxIt){
    _lastPoint = z;
    _counter = 0;
    
    while (_lastPoint.length() <= threshold && _counter <= maxIt){
        _lastPoint.x(pow(_lastPoint.x(), 2.) + pow(_lastPoint.y(), 2) + c.x());
        _lastPoint.y(2 * _lastPoint.x() * _lastPoint.y() + c.y());

        _counter++;
    }
}

#endif