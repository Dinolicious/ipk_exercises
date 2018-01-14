#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include "canvas.hh"
#include "iterationresult.hh"

void mandelbrot(Canvas& canvas, double threshold, int maxIt, std::string filename);
    for (int y = 0; y < canvas.VPix(); y++){
        for (int x = 0; x < canvas.HPix(); x++){
            Point p(-2.5 + 3.5 * (x / (canvas.w() -1), -1 + 2 * (y / (canvas.h() -1)));
            IterationResult IR = iterate(Point(0,0), c, threshold, maxIt);
        }
        if ( y  % (int)(canvas.VPix() / 100) == 0) std::cout << ".";
    }
    std::cout << "Canvas written!" << std::endl;

    canvas.write(filename);
    std::cout << filename << "written!" << std::endl;
}

int main(){
    Point p(-0.8, 0.156);

    double w, h;
    
    std::cout << "Width "; std::cin >> w;
    std::cout << "Height "; std::cin >> h;

    canvas canvasMandel(Point(-1,0), w, h, w, h);

    std::cout << "Canvas made!" << std::endl;

    double threshold
    int maxIt;

    std::cout <<"Threshold "; std::cin >> threshold;
    std::cout <<"Maximum Iterations "; std::cin >> maxIt;

    std::ostringstream mandelbrotName;
    mandelbrotName << "mandelbrot" << w << "x" << h << "-" << threshold << "," << maxIt;
    mandelbrotName << ".pgm";

    mandelbrot(canvasMandel, threshold, maxIt, mandelbrotName.str(),);


    return 0;
}