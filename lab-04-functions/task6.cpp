#include "lab_04_tasks.h"
#include <string>


std::string replace(const std::string& str, const std::string& old, const std::string& new_string) {
    if (old.empty()) {
        return str;
    }
    std::string res = str;
    size_t start = 0;
    while ((start = res.find(old, start)) != std::string::npos) {
        res.replace(start, old.length(), new_string);
        start += new_string.length();
    }
    return res;
}
