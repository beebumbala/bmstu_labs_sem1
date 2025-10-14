#include "tasks.h"

#include <vector>
#include <algorithm>
#include <iostream>


void Sort(std::list<int>& input) {
    input.sort([](int a, int b) {return a > b;});
}

int main() {
    std::list<int> nums = {1, 5, 4, -3};
    Sort(nums);

    for (auto& i: nums) {
        std::cout << i << std::endl;
    }
}

