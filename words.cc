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