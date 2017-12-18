#ifndef CANVAS_HH
#define CANVAS_HH

#include "pgm.hh"

// example implementation that combines declaration
// and definition
//
// benefit:
// code in one place, easy to get overview and see
// interconnection of code parts
//
// drawback:
// interface linked to implementation, no longer
// possible to provide more than one implementation

// simple canvas class for image generation
class Canvas
{
    // access to data without the need for accessors,
    // const keyword prevents arbitrary change of state
  public:

    const Point center;
    const double width;
    const double height;

    // pixel values are protected and can only be
    // changed using accessor functions
  private:

    std::vector<std::vector<int> > pixels;

    // Constructor and method definitions
  public:

    Canvas(const Point& center_, double width_, double height_,
        int horPixels_, int vertPixels_)
      : center(center_), width(width_), height(height_),
      pixels(horPixels,std::vector<int>(vertPixels))
  {}

    // returns coordinates of given pixel
    Point coord(int i, int j) const
    {
      double x = (i - pixels   .size()/2.)*width/pixels    .size();
      double y = (j - pixels[0].size()/2.)*height/pixels[0].size();
      return {x + canvas.center.x, y + canvas.center.y};
    }

    // read-only access to pixel
    int operator()(int i, int j) const
    {
      return pixels[i][j];
    }

    // read/write access to pixel
    int& operator()(int i, int j)
    {
      return pixels[i][j];
    }

    // create image file from canvas content
    write(const std::string& filename) const
    {
      write_pgm(pixels,filename);
    }
};

#endif //CANVAS_HH
