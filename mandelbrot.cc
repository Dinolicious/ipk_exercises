#include<iostream>
#include<cmath>
#include"canvas.hh"
#include"iterationresult.hh"

void mandelbrot (Canvas& canvas, double threshold, int maxIt, std::string filename);


int main{
    // Point center;
    double width, height;
    // int hPixels, vPixels;

    //std::cout<< "center: ";
    //std::cin>> center;
    std::cout<< "Width: ";
    std::cin>> width;
    std::cout<< "Height: ";
    std::cin>> height;
    //std::cout<< "hPixels: ";
    //std::cin>> hPixels;
    //std::cout<< "vPixels: ";
    //std::cin>> vPixels;

    Canvas canvas(Point(-1, 0), width, height, width, height);
    std::cout<< "Canvas made. \n";

    double threshold;
    int maxIt;
    std::string filename;

    std::cout << "Threshold: ";
    std::cin >> threshold;
    std::cout << "Max iteration: ";
    std::cin >> maxIt;
    std::cout << "Filename: ";
    std::cin >> filename;

    mandelbrot(canvas, threshold, maxIt, filename);

    return 0;
}

void mandelbrot (Canvas& canvas, double threshold, int maxIT, std::sting filename){
    for (int y = 0; y < canvas.vertPixels(); y++){
        for (int x = 0; x < canvas.horPixels(); x++){
            IterationResult ir;
            ir.iterate(Point(0, 0), Point(x, y), threshold, maxIt);

            if (ir.counter() > maxIt) canvas(x, y) = 0;
            else canvas(x, y) = std::log(ir.counter()) * 100.;
        }
        if (y % (int)(canvas.vertPixels() / 100) == 0) std::cout << "#";
    }

    std::cout << " Canvas writen.\n"

    canvas.write(filename);
}