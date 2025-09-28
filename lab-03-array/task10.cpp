#include "tasks.h"

#include <string>


float count_a_percent(const std::string& input) {
    if (input.empty()) {
        return 0;
    }
    int count = 0;
    for (const auto i: input) {
        if (std::tolower(i) == 'a') {
            count += 1;
        }
    }
    return static_cast<float>(count) / static_cast<float>(input.length()) * 100;
}
