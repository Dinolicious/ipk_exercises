#ifndef POINT_HH
#define POINT_HH

#include <iostream>
#include <math.h>

class Point{
    double _x;
    double _y;

    public:
    Point(): _x(0), _y(0) {}
    Point(double x, double y): _x(x), _y(y) {}

    double x() const{
        return _x;
    }
    double y() const{
        return _y;
    }
    double x(double x){
        _x = x;
    }
    double y(double y){
        _y = y;
    }
    double length(){
        return sqrt(pow(_x, 2) + pow(_y, 2));
    }
};

std::istream& operator>>(std::istream& input, Point& point){
    double x, y;
    
    input >> x >>  y;
    point.x(x);
    point.y(y);

    return input;
}

double length(const Point& point){
    return sqrt(point.x() * point.x() + point.y() * point.y());
}
double distance(const Point& point1, const Point& point2){
    return sqrt(pow(point1.x() - point2.x(), 2) + pow(point1.y() - point2.y(), 2));
}

#endif