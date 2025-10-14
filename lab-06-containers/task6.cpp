#include "tasks.h"

#include <vector>
#include <string>
#include <unordered_set>
#include <iostream>


int diffWordsCounter(const std::string& str) {
    auto it = str.begin();
    std::unordered_set<std::string> words;

    std::string current_word;

    for (; it != str.end(); ++it) {
        if (*it == ',' || *it == '.' || *it == ' ') {
            if (!current_word.empty()) {
                words.insert(current_word);
                current_word.clear();
            }
        }
        else {
            current_word += *it;
        }
    }
    if (!current_word.empty()) {
        words.insert(current_word);
    }
    return words.size();
}


int main() {
    int words = diffWordsCounter("can you can a can,can t you?");
    std::cout << words << std::endl;
}
