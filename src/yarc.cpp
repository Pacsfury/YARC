#include <iostream>
#include <string>
#include "../include/evaluator.hpp"

int main() {
    std::string line;
    
    std::cout << "> " << std::flush;
    while (std::getline(std::cin, line)) {
        
        std::string result = evaluate(line);
        
        if (result != "") {
            std::cout << "< " << result << std::endl; 
        }
        std::cout << "> ";
    }
    
    return 0;
}