#include<iostream>
#include<map>
#include<cctype>

    
std::map<char,int> get_frequencies(){
    std::map<char,int> output;
    std::cout<<"Start writing letters!"<<std::endl;
    while (true){
        unsigned char c;                                                                    //read in character
        std::cin >> c;
        if (!std::cin)                                                                      //abort if input closed
            break;
        if (isalpha(c))                                                                     //check if letter or sign
            output[toupper(c)]++;
    }
    return output;
}

void print_frequencies(const std::map<char, int>& frequencies){                             //giving number of signs
    int size = 0;
    for (auto& e : frequencies){                                                            //total number of letters
        size += e.second;
    }
    for (auto& e : frequencies){
        std::cout << e.first << ": " << (double)e.second / (double)size << std::endl;       //probability of letters
    }
    std::cout << "Total letters: " << size;
}

bool isalpha(char c){
    return std::isalpha(static_cast<unsigned char>(c));                                     //counts only letters, no signs
}

char toupper(char c){                                                                       //small and big letters into one category
    return std::toupper(static_cast<unsigned char>(c));
}



int main(){
    
    print_frequencies(get_frequencies());

    bool isalpha(char);

    char toupper(char);

    return 0;
}