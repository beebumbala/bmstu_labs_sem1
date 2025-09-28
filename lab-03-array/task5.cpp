#include "tasks.h"

#include <string>


bool is_city_length_even(const std::string &city) {
    return city.length() % 2 == 0;
}
