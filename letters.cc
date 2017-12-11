#include<iostream>
#include<map>
#include<cctype>

    
std::map<char,int> get_frequencies(){
    std::map<char,int> outmap;
    std::cout<<"Start writing letters!"<<std::endl;
    while (true){
        unsigned char c;                        // read in character
        std::cin >> c;
        if (!std::cin)                        // abort if input closed
        break;
    outmap[c]++;
    }
    return outmap;
}

void print_frequencies(const std::map<char,int>& frequencies){
    for (auto entry : frequencies){
        std::cout<<entry.first<<":";
        std::cout<<entry.second<<std::endl;
    }
}


int main(){
    
    print_frequencies(get_frequencies());

    return 0;
}