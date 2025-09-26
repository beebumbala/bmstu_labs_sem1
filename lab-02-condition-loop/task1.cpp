#include <iostream>


int main() {
    int x, y, z;
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter y: ";
    std::cin >> y;
    std::cout << "Enter z: ";
    std::cin >> z;

    // condition 1
    if (x & 1 && y & 1) {
        std::cout << "condition1 is true" << std::endl;
    } else {
        std::cout << "condition1 is false" << std::endl;
    }

    // condition 2
    if (x < 20 ^ y < 20) {
        std::cout << "condition2 is true" << std::endl;
    } else {
        std::cout << "condition2 is false" << std::endl;
    }

    // condition 3
    if (x == 0 || y == 0) {
        std::cout << "condition3 is true" << std::endl;
    } else {
        std::cout << "condition3 is false" << std::endl;
    }

    // condition 4
    if (x < 0 && y < 0 && z < 0) {
        std::cout << "condition4 is true" << std::endl;
    } else {
        std::cout << "condition4 is false" << std::endl;
    }

    // condition 5
    if ((x % 5 == 0) + (y % 5 == 0) + (z % 5 == 0) == 1) {
        std::cout << "condition5 is true" << std::endl;
    } else {
        std::cout << "condition5 is false" << std::endl;
    }

    // condition 6
    if (x > 100 || y > 100 || z > 100) {
        std::cout << "condition6 is true" << std::endl;
    } else {
        std::cout << "condition6 is false" << std::endl;
    }
    return 0;
}

