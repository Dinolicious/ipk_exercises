#ifndef ITERATIONRESULT_HH
#define ITERATIONRESULT_HH

#include<math.h>
#include"Point.hh"

struct IterationResult{
    Point oldPoint;
    int counter;

    IterationResult(Point point, int newcounter): oldPoint(point), counter(newcounter) {}
}

void IterationResult::iterate(Point z, Point c, double threshold, int maxIt){
    IterationResult output(z,0);
    
    while (distance(z, output.oldPoint) < threshold && output.counter < maxIt){
        Point oldPoint = output.oldPoint;

        oldPoint.x(pow(oldPoint.x(), 2) - pow(oldPoint.y(), 2) + c.x(), 2* oldPoint.y(2 * oldPoint.x() * oldPoint.y() + c.y());

        output.oldPoint = newPoint;
        output.counter++;
    }
    return output;
}

#endif