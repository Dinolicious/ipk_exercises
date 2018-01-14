#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include "canvas.hh"
#include "iterationresult.hh"

void mandelbrot(Canvas& canvas, double threshold, int maxIt, std::string filename){
    for (int y = 0; y < canvas.vertPixels(); y++){
        for (int x = 0; x < canvas.horPixels(); x++){
            Point p(-2.5 + 3.5 * (x / (canvas.width() -1)), -1 + 2 * (y / (canvas.height() -1)));
            IterationResult IR = iterate(Point(0,0), p, threshold, maxIt);

            if (IR.counter() >= maxIt) canvas(x, y) = 0;
                else canvas(x, y) = log(IR.counter()) * 100;
        }
        if ( y  % (int)(canvas.vertPixels() / 100) == 0) std::cout << ".";
    }
    std::cout << " Canvas written!" << std::endl;

    canvas.write(filename);
    std::cout << filename << " written!" << std::endl;
}

void mandelbrot(Canvas&, double, int, std::string);

int main(){
    Point p(-0.8, 0.156);

    double width, height;
    
    std::cout << "Width: "; 
    std::cin >> width;
    std::cout << "Height: "; 
    std::cin >> height;

    Canvas canvasMandel(Point(-1,0), width, height, width, height);

    std::cout << "Canvas made!" << std::endl;

    double threshold;
    int maxIt;

    std::cout <<"Threshold: "; 
    std::cin >> threshold;
    std::cout <<"Maximum Iterations: "; 
    std::cin >> maxIt;

    std::ostringstream mandelbrotName;
    mandelbrotName << "mandelbrot" << width << "x" << height << "-" << threshold << "," << maxIt;
    mandelbrotName << ".pgm";

    mandelbrot(canvasMandel, threshold, maxIt, mandelbrotName.str());


    return 0;
}