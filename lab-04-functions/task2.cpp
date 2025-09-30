#include <limits>

#include "lab_04_tasks.h"
#include <vector>


// .first is min
// .second is max
std::pair<float, float> minMax(const std::vector<float>& input) {
    if (!input.size()) {
        return std::make_pair(std::numeric_limits<float>::min(), std::numeric_limits<float>::max());
    }
    std::pair<float, float> res = {input[0], input[0]};
    for (auto i: input) {
        res.first = std::min(res.first, i);
        res.second = std::max(res.second, i);
    }
    return res;
}
