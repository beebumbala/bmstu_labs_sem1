#include "tasks.h"


int sum_array(const int* input, const unsigned int size) {
    int res = 0;
    for (int i = 0; i < size; ++i) {
        res += input[i];
    }
    return res;
}

int sum_squares(const int* input, const unsigned int size) {
    int res = 0;
    for (int i = 0; i < size; ++i) {
        res += input[i] * input[i];
    }
    return res;
}

int sum_six(const int* input, const unsigned int size) {
    int res = 0;
    if (size < 6) {
        return sum_array(input, size);
    }
    for (short i = 0; i < 6; ++i) {
        res += input[i];
    }
    return res;
}

int sum_k(const int* input, const unsigned int size, const int k1, const int k2) {
    int res = 0;
    if (size < k1) {
        return 0;
    }
    if (size < k2) {
        for (int i = k1-1; i < size; ++i) {
            res += input[i];
        }
    }
    else {
        for (int i = k1-1; i < k2; ++i) {
            res += input[i];
        }
    }
    return res;
}

float mean(const int* input, const unsigned int size) {
    if (size == 0) {
        return 0;
    }
    int summ = 0;
    for (int i = 0; i < size; ++i) {
        summ += input[i];
    }
    return static_cast<float>(summ) / size;
}

float mean_k(const int* input, const unsigned int size, const int s1, const int s2) {
    return static_cast<float>(sum_k(input, size, s1, s2)) / (s2 - s1 + 1);
}
