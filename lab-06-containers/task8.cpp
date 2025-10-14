#include "tasks.h"

#include <vector>
#include <algorithm>
#include <iostream>


void plusesDeleter(std::vector<int>& input) {
    auto end = std::remove_if(input.begin(), input.end(),
                                [](const int x) { return x > 0; });
    input.erase(end, input.end());
}


int main() {
    std::vector<int> v = {1, 0, -8, -9, 0, 10, 23, -7};
    plusesDeleter(v);
    for (auto& i: v) {
        std::cout << i << std::endl;
    }
}

