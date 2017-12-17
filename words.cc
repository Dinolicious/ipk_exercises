#include<iostream>
#include<map>
#include<cctype>
#include<string>
#include"sanitizedword.hh"

std::map<char,int> get_frequencies(){
    std::map<char,int> output;
    std::cout<<"Start writing words!"<<std::endl;
    while (true){
        std::string s;
        std::cin >> s;
        if (!std::cin)
            break;
        sanitize_word(s);
            if (s.size() !=0)
                output[s]++

    }
    return output;
}

void print_frequencies(const std::map<char, int>& frequencies){
    int size = 0;
    for (auto& e : frequencies){
        size += e.second;
    }
    for (auto& e : frequencies){
        std::cout << e.first << ": " << (double)e.second / (double)size << std::endl;
    }
    std::cout << "Total words: " << size;
}

std::map<std::string,int> get_frequencies();
void print_frequencies(const std::map<std::string, int>&);

int main{
    print_frequencies(get_frequencies());

    return 0;
}