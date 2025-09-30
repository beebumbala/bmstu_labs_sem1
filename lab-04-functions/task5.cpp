#include "lab_04_tasks.h"
#include <vector>


bool remove_first_negative_element(std::vector<int>& input, int& removed_element) {
    for (int i = 0; i < input.size(); ++i) {
        if (i < 0) {
            removed_element = input[i];
            input.erase(input.begin() + i);
            return true;
        }
    }
    removed_element = 0;
    return false;
}