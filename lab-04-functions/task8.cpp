#include "lab_04_tasks.h"
#include <string>


std::string join(const std::vector<std::string>& input, const std::string& sep) {
    std::string res;
    for (int i = 0; i < input.size(); ++i) {
        if (i == input.size() - 1) {
            res += input[i];
        } else {
            res += input[i]+sep;
        }
    }
    return res;
}
