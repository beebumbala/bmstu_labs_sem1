#include <iostream>

void print_multi_table(const int n) {
    for (short i = 1; i < 10; ++i) {
        std::cout << i << " x " << n << " = " << i*n << std::endl;
    }
}

int main() {
    print_multi_table(7);

    int n;
    std::cout << "\nEnter n: ";
    std::cin >> n;

    print_multi_table(n);
    return 0;
}

