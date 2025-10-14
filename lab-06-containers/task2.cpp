#include "tasks.h"

#include <vector>
#include <iostream>


std::vector<int>::iterator findInSorted(std::vector<int>::iterator first, std::vector<int>::iterator last, int el) {
    if (first == last) {
        return last;
    }
    auto l = first, r = last-1;

    while (l <= r) {
        auto mid = l + std::distance(l, r) / 2;
        if (*mid == el) {
            return mid;
        }

        if (*mid < el) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return last;
}


int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    auto it = findInSorted(v.begin(), v.end(), 2);
    std::cout << std::distance(v.begin(), it)<< std::endl;
}