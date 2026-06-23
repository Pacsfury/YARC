#include <iostream>
#include <string>
#include "../include/helpers.hpp"

std::string evaluate(const std::string& line) {
    if (line.empty()) {
        return "wrong"; 
    }

    std::vector<std::string> args = Helpers::split(line, " ");

    if (args.empty()) {
        return "wrong";
    }

    std::string operation = args[0];

    if (operation == "print") {
        if (args.size() != 2) {
            return "wrong";
        }
        
        std::cout << args[1] << std::endl;
        return "ok";
    }
    
    return "wrong";
}