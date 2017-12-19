#ifndef ITERATIONRESULT_HH
#define ITERATIONRESULT_HH

#include<math.h>
#include"Point.hh"

class IterationResult{                                                                     //class w lastPoint and Iteration-counter
    Point _lastPoint;
    int _counter;

    public:
        IterationResult(lastPoint): _lastPoint(lastPoint), _counter(0) {}

        Point lastPoint(0) const{
            return lastPoint;
        }
        IterationResult iteration(Point, Point, double, int);
};

