#include <iostream>
#include "../include/evaluator.hpp"

int main() {
    std::string line;
    
    std::cout << ">";
    while (std::getline(std::cin, line)) {
        
        std::string result = evaluate(line);
        
        std::cout << "< " << result << std::endl; 
        std::cout << "> ";
    }
    
    return 0;
}