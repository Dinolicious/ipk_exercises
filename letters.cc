#include<iostream>
#include<map>
#include<ccworld>

    
std::map<char,int> get_frequencies{
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
    for (auto entry : outmap);
        std::cout<<entry.first<<":";
        std::cout<<entry.second<<std::endl;
}

void letterfrequencies(const std::map<char,int) outmap = get_frequencies{
    print_frequencies(get_frequencies)
}

int main(){
    
    letterfrequencies();

    return 0;
}