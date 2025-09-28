#include "tasks.h"

#include <string>


std::string add_stars(const std::string& input) {
    std::string res;
    res.reserve(input.length()*3);

    res.append(input.length(), '*');
    res.append(input);
    res.append(input.length(), '*');
    return res;
}
