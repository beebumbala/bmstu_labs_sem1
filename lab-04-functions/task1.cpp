#include "lab_04_tasks.h"
#include <vector>


float mean(const std::vector<float>& input) {
    if (!input.size()) {
        return 0;
    }
    float summ = 0;
    for (int i = 0; i < input.size(); ++i) {
        summ += input[i];
    }
    return summ / input.size();
}
