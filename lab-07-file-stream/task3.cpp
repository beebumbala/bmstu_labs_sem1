#include "tasks.h"
#include <fstream>
#include <iostream>


static std::vector<std::string> split(const std::string& input, const char &sep) {
    std::vector<std::string> res;
    std::string current;
    for (const auto i: input) {
        if (i == sep) {
            res.push_back(current);
            current.clear();
        }
        else {
            current += i;
        }
    }
    if (!current.empty()) {
        res.push_back(current);
    }
    return res;
}

void saveToFile(const std::string& filename, const Groups& groups) {
    const std::string path = "files/" + filename;

    std::ofstream fs(path);
    if (!fs.is_open()) {
        std::cout << "Error opening the file" << std::endl;
        return;
    }
    for (const auto& group: groups) {
        fs << group.first << '$';
        for (auto& student: group.second) {
            fs << student.Name << '|' << student.Year << '|';
            for (auto& subject: student.RecordBook) {
                fs << subject.first << ':' << subject.second << '|';
            }
            fs << '$';
        }
        fs << '\n';
    }
    fs.close();
    std::cout << "Data is exported to " << filename << std::endl;
}

void loadFromFile(const std::string& filename, Groups& outGroups) {
    const std::string path = "files/" + filename;

    std::ifstream fs(path);
    if (!fs.is_open()) {
        std::cout << "Error opening the file" << std::endl;
        return;
    }

    std::string group;
    try {
        while (std::getline(fs, group)) {
            std::vector<std::string> splited_group = split(group, '$');
            std::vector<Student> students;
            for (int i = 1; i < splited_group.size(); ++i) {
                Student tempStudent;
                std::vector<std::string> student_str = split(splited_group[i], '|');
                tempStudent.Name = student_str[0];
                tempStudent.Year = std::stoi(student_str[1]);
                for (int j = 2; j < student_str.size(); ++j) {
                    std::vector<std::string>subject = split(student_str[j], ':');
                    tempStudent.RecordBook[subject[0]] = static_cast<Score>(std::stoi(subject[1]));
                }
                students.push_back(tempStudent);
            }
            outGroups[splited_group[0]] = students;
        }
        std::cout << "Data is imported from " << filename << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Unexpected error: " << e.what() << std::endl;
    }
    fs.close();
}

int main() {
    Student s1, s2, s3;
    Groups yo;
    s1.Name = "Vadim Antonov";
    s1.Year = 1984;
    s2.Name = "s2_name";
    s2.Year = 1487;
    s3.Name = "s3_name";
    s3.Year = 2026;
    s1.RecordBook = {{"AlgYaz", Excellent}, {"TeorInf", Unsatisfactorily}};
    s2.RecordBook = {{"sub1", Satisfactorily}};
    s3.RecordBook = {{"sub_sdfsdfs", Good}};
    yo["g1"] = {s1, s2};
    yo["g2"] = {s3};
    saveToFile("test.txt", yo);

    Groups yo_out;
    loadFromFile("test.txt", yo_out);
    for (const auto& i: yo_out) {
        std::cout << i.first << '\n';
        for (const auto& j: i.second) {
            std::cout << j.Name << ' ' << j.Year << '\n';
            for (const auto& z: j.RecordBook) {
                std::cout << z.first << ": " << z.second << '\n';
            }
            std::cout << '\n';
        }
        std::cout << '\n';
    }
    return 0;
}