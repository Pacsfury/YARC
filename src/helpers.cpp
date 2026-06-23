#include <iostream>
#include <string>
#include <vector>

namespace Helpers {

    std::vector<std::string> split(const std::string& text, std::string search, int max=0) {
        std::vector<std::string> tokens;
    
        if (search.empty()) {
            tokens.push_back(text);
            return tokens;
        }

        size_t start = 0;
        size_t end = text.find(search);
        size_t splits_count = 0;

        while (end != std::string::npos && (max == 0 || splits_count < max)) {
            tokens.push_back(text.substr(start, end - start));
            start = end + search.length();
            end = text.find(search, start);
            splits_count++;
        }

        tokens.push_back(text.substr(start));

        return tokens;
    }
    
} //namespace Helpers