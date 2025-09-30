#include <iostream>

#include "lab_04_tasks.h"
#include <vector>


void sort(std::vector<float>& input) {
    for (int i = 0; i < input.size() - 1; ++i) {
        bool was_swapped = false;
        for (int j = 0; j < input.size() - i - 1; ++j) {
            if (input[j] < input[j + 1]) {
                std::swap(input[j], input[j + 1]);
                was_swapped = true;
            }
        }
        if (!was_swapped) {
            break;
        }
    }
}
