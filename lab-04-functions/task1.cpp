#include "lab_04_tasks.h"
#include <vector>


float mean(const std::vector<float>& input) {
    if (input.empty()) {
        return 0;
    }
    float summ = 0;
    for (const auto i: input) {
        summ += i;
    }
    return summ / input.size();
}
