cmake_minimum_required(VERSION 3.1)
project(IPK09 CXX)

set(CMAKE_CXX_STANDARD 14)

add_library(frequenciesLib frequencysource.hh frequencies.hh)

add_executable(swap swap.cc)
add_executable(letterfrequencies letterfrequencies.cc)

set_target_properties(frequenciesLib PROPERTIES LINKER_LANGUAGE CXX)

target_link_libraries(letterfrequencies frequenciesLib)