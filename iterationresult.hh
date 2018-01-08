#ifndef ITERATIONRESULT_HH
#define ITERATIONRESULT_HH

#include<math.h>
#include"Point.hh"

struct IterationResult{
    Point lastPoint;
    int counter;

    IterationResult(Point point, int newcounter): lastPoint(point), counter(newcounter) {}
}

void IterationResult::iterate(Point z, Point c, double threshold, int maxIt){
    IterationResult output(z,0);
    
    while (distance(z, output.lastPoint) < threshold && output.counter < maxIt){
        Point lastPoint = output.lastPoint;

        lastPoint.x(pow(lastPoint.x(), 2) - pow(lastPoint.y(), 2) + c.x(), 2* lastPoint.y(2 * lastPoint.x() * lastPoint.y() + c.y());

        output.lastPoint = newPoint;
        output.counter++;
    }
    return output;
}

#endif