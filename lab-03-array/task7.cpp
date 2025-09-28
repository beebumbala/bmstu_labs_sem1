#include "tasks.h"

#include <algorithm>
#include <string>


static bool comp(const std::string &el1, const std::string &el2) {
    return el1.length() < el2.length();
}


void get_longest_shortest(const std::string& s1, const std::string& s2, const std::string& s3, std::string& the_longest, std::string& the_shortest) {
    auto* arr = new std::string[3]{s1, s2, s3};
    std::sort(arr, arr+3, comp);
    the_longest = arr[2];
    the_shortest = arr[0];
    delete[] arr;
}
