#include <limits>

#include "lab_04_tasks.h"
#include <vector>


int argmax(const std::vector<float>& input) {
    std::pair<float, int> res = {std::numeric_limits<float>::min(), -1};
    for (int i = 0; i < input.size(); ++i) {
        if (res.first < input[i]) {
            res.first = input[i];
            res.second = i;
        }
    }
    return res.second;
}