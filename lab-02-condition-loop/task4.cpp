#include <iostream>


long long get_multiplication(const int a, const int b) {
    long long res = 1;
    for (int i = a; i <= b; ++i) {
        res *= i;
    }
    return res;
}


int main() {
    printf("Multiplication of all integers from 8 to 15 equals %lld\n", get_multiplication(8, 15));

    short a, b;

    std::cout << "Enter a: ";
    std::cin >> a;
    printf("Multiplication of all integers from %d to %d equals %lld\n", a, 20, get_multiplication(a, 20));

    std::cout << "Enter b: ";
    std::cin >> b;
    printf("Multiplication of all integers from %d to %d equals %lld\n", 1, b, get_multiplication(1, b));

    std::cout << "Enter new a and b (separated by space): ";
    std::cin >> a >> b;
    printf("Multiplication of all integers from %d to %d equals %lld\n", a, b, get_multiplication(a, b));

    return 0;
}

