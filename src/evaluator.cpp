#include <iostream>
#include <string>
#include "../include/helpers.hpp"

void* evaluate(const std::string& line) {
    std::vector<std::string> args = Helpers::split(line, " ");

    std::string operation = args[0];

    if (operation == "print") {
        std::cout<<args[1];
        return "ok";
    }
    return "wrong";
}