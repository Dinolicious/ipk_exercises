#include <iostream>
#include <map>
#include "frequencysource.hh"
#include "frequencies.hh"

int main(int argc, char** argv){
    std::cout << argc << std::endl;

    LetterFrequencies<std::map<char, int>> lF;
    auto source = streamLetterSource(std::cin);

    lF.readData(source);
    lF.printStatistics();

    return 0;
}