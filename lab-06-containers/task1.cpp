#include "tasks.h"

#include <vector>
#include <iostream>


std::vector<int>::iterator Find(std::vector<int>::iterator first, std::vector<int>::iterator last, int el) {
    for (auto it = first; it != last; ++it) {
        if (*it == el) {
            return it;
        }
    }
    return last;
}


int main() {
    std::vector<int> v = {6, 8, 1, 2, 3, 4, 5};
    std::vector<int>::iterator it = Find(v.begin(), v.end(), 2);
    std::cout << std::distance(v.begin(), it)<< std::endl;
}
