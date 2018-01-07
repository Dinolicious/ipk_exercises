cmake_minimum_required(VERSION 3.1)
project(ipk08 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)


add_library(Lib canvas.hh point.hh pgm.cc iteration.hh)

add_executable(mandelbrot mandelbrot.cc)

target_link_libraries(mandelbrot Lib)