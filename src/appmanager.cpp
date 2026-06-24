#include <fstream>
#include <iostream>
#include <string>
#include "../include/appmanager.hpp"
#include "../include/evaluator.hpp"

namespace Apps {
    std::string openApp(std::string path) {
        std::ifstream appfile(path);
        if (!appfile.is_open()) {
            std::cerr << "Error: Wrong app path." << std::endl;
            return "wrong";
        }
        std::string line;

        while (std::getline(appfile, line)) {
            std::string result = evaluate(line);
            if (result != "") {
                std::cout << "< " << result << std::endl;
            }
        }
        return "ok";

    }

} //namespace Apps