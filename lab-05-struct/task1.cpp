#include "lab_05_struct.h"

#include <algorithm>
#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>


static float mean(const std::vector<unsigned>& input) {
    if (input.empty()) {
        return 0;
    }
    unsigned int summ = 0;
    for (unsigned int i : input) {
        summ += i;
    }
    return static_cast<float>(summ) / static_cast<float>(input.size());
}


void SortByName(std::vector<Student>& students) {
    std::sort(students.begin(), students.end(), [](const Student& a, const Student& b) {return a.Name < b.Name;});
}

void SortByRating(std::vector<Student>& students) {
    std::sort(students.begin(), students.end(), [](const Student& a, const Student& b) {return mean(a.Ratings) < mean(b.Ratings);});
}

size_t CountTwoness(const std::vector<Student>& students) {
    size_t res = 0;
    for (auto i: students) {
        res += static_cast<int>(std::any_of(i.Ratings.begin(), i.Ratings.end(), [](const unsigned& a) {return a == 2;}));
    }
    return res;
}

size_t CountExcellent(const std::vector<Student>& students) {
    size_t res = 0;
    for (auto i: students) {
        res += static_cast<int>(std::all_of(i.Ratings.begin(), i.Ratings.end(), [](const unsigned& a) {return a == 5;}));
    }
    return res;
}

std::vector<Student> VectorMathExcellent(const std::vector<Student>& students) {
    std::vector<Student> res;
    for (auto i: students) {
        for (int index= 0; index < i.Subjects.size(); ++index) {
            if (i.Subjects[index] == "Math") {
                if (i.Ratings[index] == 5) {
                    res.push_back(i);
                }
                break;
            }
        }
    }
    return res;
}

std::vector<std::string> GroupsId(const std::vector<Student>& students) {
    std::unordered_set<std::string> set;
    for (const auto& i: students) {
        set.insert(i.GroupId);
    }
    std::vector<std::string> res;
    res.reserve(set.size());
    for (const auto& i: set) {
        res.push_back(i);
    }
    return res;
}

std::vector<Group> Groups(const std::vector<Student>& students) {
    std::vector<Group> res;
    std::unordered_map<std::string, std::vector<Student>> groups_map;
    for (const auto& i: students) {
        groups_map[i.GroupId].push_back(i);
    }
    for (const auto& [key, value] : groups_map) {
        res.push_back({key, value});
    }
    return res;
}

// int main() {
//     Student s1 = {"Name1", "RK1-11", {}, {}};
//     Student s2 = {"Name2", "IU8-14", {}, {}};
//     std::vector<Student> students = {s1, s2};
//     std::vector<Group> res = Groups(students);
//     for (auto i: res) {
//         std::cout << "id: " << i.Id << std::endl << "Some_students" << "\n\n";
//     }
//     return 0;
//
// }
