#include "lab_04_tasks.h"
#include <string>


std::vector<std::string> split(const std::string& input, const char sep) {
    std::vector<std::string> res;
    std::string current;
    for (const auto i: input) {
        if (i == sep) {
            res.push_back(current);
            current.clear();
        }
        else {
            current += i;
        }
    }
    if (!current.empty()) {
        res.push_back(current);
    }
    return res;
}
