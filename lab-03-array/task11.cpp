#include <algorithm>
#include <iostream>

#include "tasks.h"

#include <string>

static std::string lower(const std::string& input) {
    std::string res;
    res.reserve(input.length());
    for (const unsigned char c: input) {
        res += static_cast<char>(std::tolower(c));
    }
    return res;
}


std::string replace_can(const std::string& input) {
    std::string res;
    std::string temp_word;
    for (const char c: input) {
        if (std::isspace(c) ||
            std::ispunct(c)) {
            if (lower(temp_word) == "can") {
                if (temp_word[0] == 'C') {
                    res.append("New_word");
                } else{
                    res.append("new_word");
                }
            } else {
                res.append(temp_word);
            }
            temp_word.clear();
            res += c;
        }
        else {
            temp_word += c;
        }
    }
    if (temp_word == "can") {
        res.append("new_word");
    } else {
        res.append(temp_word);
    }
    return res;
}

int main() {
    std::string a = "Can you can a can better, than how canner can can a can?";
    std::cout << replace_can(a) << std::endl;
    return 0;
}

