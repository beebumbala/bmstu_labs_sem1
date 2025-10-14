#include "tasks.h"

#include <list>
#include <iostream>


void reverseNum(std::list<int>& input) {
    auto it = input.begin();

    while (it != input.end()) {
        input.insert(it, -*it);
        ++it;
    }
}


int main() {
    std::list<int> nums = {1, 5, 4, -3};
    reverseNum(nums);
    for (auto& i: nums) {
        std::cout << i << std::endl;
    }
    // nums == {-1, 1, -5, 5, -4, 4, 3, -3};
}
