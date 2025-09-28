#include "tasks.h"

#include <string>


std::string get_slice(const std::string& input, int start, int end) {
    // built-in
    // return input.substr(start-1, end-start+1);

    // hand-made
    std::string res;

    start = std::max(1, start);
    end = std::min(end, static_cast<int>(input.length()));
    if (end < start) {
        return res;
    }
    res.reserve(end - start + 1);
    for (int i = start-1; i < end; ++i) {
        res += input[i];
    }
    return res;
}
