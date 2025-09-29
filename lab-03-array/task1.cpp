#include "tasks.h"

#include <iostream>


void multi_2(int* input, const unsigned int size) {
    for (int i = 0; i < size; ++i) {
        input[i] *= 2;
    }
}

void reduce_a(int* input, const unsigned int size, const int a) {
    for (int i = 0; i < size; ++i) {
        input[i] -= a;
    }
}

void div_on_first(float* input, const unsigned int size) {
    if (!size || input[0] == 0) {
        if (size) {
            std::cout << "Dividing by zero is impossible! Returning 0-filled vector." << std::endl;
        }
    }
    else {
        for (int i = 0; i < size; ++i) {
            input[i] = input[i] / input[0];
        }
    }
}
