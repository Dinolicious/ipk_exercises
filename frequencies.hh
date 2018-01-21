#ifndef FREQUENCIES_HH
#define FREQUENCIES_HH

#include <iostream>
#include <cctype>

template<typename Map>
class LetterFrequencies{
    Map _map;

    bool isalpha(char);
    char toupper(char);

public:
    template<typename Source>
    void readData(Source& source);
    void printStatistics();
};
template<typename Map>
bool LetterFrequencies<Map>::isalpha(char c){
    return std::isalpha(static_cast<unsigned char>(c));
}
template<typename Map>
char LetterFrequencies<Map>::toupper(char c){
    return std::toupper(static_cast<unsigned char>(c));
}
template<typename Map>
template<typename Source>
void LetterFrequencies<Map>::readData(Source& source){u
    while(true){
        auto data = source.next();

        if (!data.second) break;

        if (isalpha(data.first)) _map[toupper(data.first)]++;
    }
}
template<typename Map>
void LetterFrequencies<Map>::printStatistics(){
    for (auto& e : _map) std::cout << e.first << ": " << e.second << std::endl;
}

#endif