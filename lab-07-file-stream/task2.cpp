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

void saveToFile(const std::string& filename, const std::vector<Book>& data) {
    const std::string path = "files/" + filename;

    std::ofstream fs(path);
    if (!fs.is_open()) {
        std::cout << "Error opening the file" << std::endl;
        return;
    }

    for (const auto& book: data) {
        fs << book.Author << '|' << book.Title << '|' << book.Year << std::endl;
    }

    fs.close();
    std::cout << "Data is exported to " << filename << std::endl;
}

void loadFromFile(const std::string& filename, std::vector<Book>& outData) {
    const std::string path = "files/" + filename;

    std::ifstream fs(path);
    if (!fs.is_open()) {
        std::cout << "Error opening the file" << std::endl;
        return;
    }

    std::string book;
    try {
        while (std::getline(fs, book)) {
            std::vector<std::string> splited = split(book, '|');
            outData.push_back({splited[0], splited[1], std::stoi(splited[2])});
        }
        std::cout << "Data is imported from " << filename << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Unexpected error: " << e.what() << std::endl;
    }
    fs.close();
}

int main() {
    std::vector<Book> a;
    loadFromFile("test.txt", a);
    for (auto& i: a) {
        std::cout << i.Author << ' ' << i.Title << ' ' << i.Year << std::endl;
    }
    a.insert(a.begin(), {"A", "T", 1828});
    saveToFile("test.txt", a);
    return 0;
}