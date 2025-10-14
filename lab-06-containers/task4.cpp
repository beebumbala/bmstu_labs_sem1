#include "tasks.h"

#include <map>
#include <string>
#include <iostream>


std::map<std::string, int> wordsMapCounter(const std::string& str) {
    auto it = str.begin();
    std::map<std::string, int> res;

    std::string current_word;

    for (; it != str.end(); ++it) {
        if (*it == ',' || *it == '.' || *it == ' ') {
            if (!current_word.empty()) {
                res[current_word]++;
                current_word.clear();
            }
        }
        else {
            current_word += *it;
        }
    }
    if (!current_word.empty()) {
        res[current_word]++;
    }
    return res;
}


int main() {
    std::map<std::string, int> words = wordsMapCounter("can you can, pleaze?,ok i'll.do");
    for (auto &[key, value]: words) {
        std::cout << key << ": " << value << std::endl;
    }
}
