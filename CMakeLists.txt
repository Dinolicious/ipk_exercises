cmake_minimum_required(VERSION 3.1)
project(ipk07 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_BUILD_TYPE Release)

add_library(lettersLib letters.cc)
add_library(wordsLib words.cc)

add_executable(letters letters.cc)
add_executable(words words.cc)

target_link_libraries(letters lettersLib)
target_link_libraries(words wordsLib)