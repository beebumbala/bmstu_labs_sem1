#include "tasks.h"


static void swap(int* a, int* b) {
    if (a && b) {
        *a = *a ^ *b;
        *b = *a ^ *b;
        *a = *a ^ *b;
    }
}

void replace_3(int* input) {
    for (int i = 0; i < 3; ++i) {
        swap(input+i, input+17+i);
    }
}
