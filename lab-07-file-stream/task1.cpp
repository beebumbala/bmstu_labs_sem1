#include "tasks.h"
#include <fstream>
#include <iostream>


void saveToFile(const std::string& filename, const std::vector<std::string>& data) {
    const std::string path = "files/" + filename;

    std::ofstream fs(path);
    if (!fs.is_open()) {
        std::cout << "Error opening the file" << std::endl;
        return;
    }

    for (const auto & i : data) {
        fs << i << std::endl;
    }

    fs.close();
    std::cout << "Data is exported to " << filename << std::endl;
}

void loadFromFile(const std::string& filename, std::vector<std::string>& outData) {
    const std::string path = "files/" + filename;

    std::ifstream fs(path);
    if (!fs.is_open()) {
        std::cout << "Error opening the file" << std::endl;
        return;
    }

    std::string value;
    while (std::getline(fs, value)) outData.push_back(value);

    fs.close();
    std::cout << "Data is imported from " << filename << std::endl;
}

int main() {
    std::vector<std::string> a{"1213", "sdfasd", "sddddddddddddddddd"};
    saveToFile("test.txt", a);
    std::vector<std::string> b;
    loadFromFile("test.txt", b);
    for (const auto& i: b) {
        std::cout << i << std::endl;
    }
    return 0;
}