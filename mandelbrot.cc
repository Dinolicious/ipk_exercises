#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include "canvas.hh"
#include "iteration.hh"

void mandelbrot(Canvas&, double, int, std::string, bool);
void julia (Point, Canvas&, double, int, std::string, bool);

int main(){
    Point c(-0.8, 0.156);

    double width, height;

    std::cout << "Width: ";
    std::cin >> width;
    std::cout << "Height: ";
    std::cin >> height;

    Canvas canvasMandel(Point(-1, 0), width, height, width, height);
    Canvas canvasJulia(c, width, height, width, height);
    std::cout << "Canvas made.\n\n";

    double threshold;
    int maxIt;
    bool smooth = false;
    char smoothChar;

    std::cout << "Threshold: ";
    std::cin >> threshold;
    std::cout << "Max iteration: ";
    std::cin >> maxIt;
    std::cout << "smooth [y/n]: ";
    std::cin >> smoothChar;

    if (smoothChar == 'y') smooth = true;

    std::ostringstream mandelbrotName;
    mandelbrotName << "mandelbrot" << width << "x" << height << "-" << threshold << "," << maxIt;
    if (smooth) mandelbrotName << "-smooth";
    mandelbrotName << ".pgm";


    mandelbrot(canvasMandel, threshold, maxIt, mandelbrotName.str(), smooth);

    std::ostringstream juliaName;
    juliaName << "julia" << width << "x" << height << "-" << threshold << "," << maxIt;
    if (smooth) juliaName << "-smooth";
    juliaName << ".pgm";

    julia(c, canvasJulia, threshold, maxIt, juliaName.str(), smooth);

    return 0;
}

void mandelbrot(Canvas& canvas, double threshold, int maxIt, std::string filename, bool smooth){
    for (int y = 0; y < canvas.vertPixels(); y++){
        for (int x = 0; x < canvas.horPixels(); x++){
            Point c(-2.5 + 3.5 * (x / (canvas.width() - 1)), -1 + 2 * (y / (canvas.height()- 1)));
            IterationResult ir = iterate(Point(0, 0), c, threshold, maxIt);

            if (ir.counter() >= maxIt) canvas(x, y) = 0;
            else {
                if (smooth) canvas(x, y) = (double)ir.counter() - log2(log(length(ir.lastPoint())) / log(threshold));
                else canvas(x, y) = log(ir.counter()) * 100;
            }
        }
        if (y % (int)(canvas.vertPixels() / 10) == 0) std::cout << y / (int)(canvas.vertPixels() / 10);
        else if (y % (int)(canvas.vertPixels() / 100) == 0) std::cout << "#";
    }

    std::cout << " Canvas writen." << std::endl;

    canvas.write(filename);
    std::cout << filename << " writen\n";
}
void julia (Point c, Canvas& canvas, double threshold, int maxIt, std::string filename, bool smooth = false){
    for (int y = 0; y < canvas.vertPixels(); y++){
        for (int x = 0; x < canvas.horPixels(); x++){
            Point z(-2.5 + 3.5 * (x / (canvas.width() - 1)), -1 + 2 * (y / (canvas.height() - 1)));
            IterationResult ir = iterate(z, c, threshold, maxIt);

            if (ir.counter() >= maxIt) canvas(x, y) = 0;
            else {
                if (smooth) canvas(x, y) = (double)ir.counter() - log2(log(length(ir.lastPoint())) / log(threshold));
                else canvas(x, y) = log(ir.counter()) * 100;
            }
        }
        if (y % (int)(canvas.vertPixels() / 10) == 0) std::cout << y / (int)(canvas.vertPixels() / 10);
        else if (y % (int)(canvas.vertPixels() / 100) == 0) std::cout << "#";
    }

    std::cout << " canvas writen\n";

    canvas.write(filename);
    std::cout << filename << " writen\n";
}