#include "tasks.h"

#include <string>
#include <iostream>


int wordsCounter(const std::string& str) {
    auto it = str.begin();
    int c  = 0;
    int current_length = 0;

    for (; it != str.end(); ++it) {
        if (*it == ',' || *it == '.' || *it == ' ') {
            if (current_length) {
                c++;
                current_length = 0;
            }
        }
        else {
            current_length++;
        }
    }
    if (current_length) {
        c++;
    }
    return c;
}


int main() {
    int words = wordsCounter("can you can,pleaze, can . a");
    std::cout << words << std::endl;
}
