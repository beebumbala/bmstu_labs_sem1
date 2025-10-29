#pragma once

#include <map>
#include <string>
#include <vector>

// task1
void saveToFile(const std::string& filename, const std::vector<std::string>& data);
void loadFromFile(const std::string& filename, std::vector<std::string>& outData);

// task2
struct Book
{
    std::string Author;
    std::string Title;
    int Year;
};
void saveToFile(const std::string& filename, const std::vector<Book>& data);
void loadFromFile(const std::string& filename, std::vector<Book>& outData);

//task3
enum Score
{
    Unsatisfactorily = 2,
    Satisfactorily = 3,
    Good = 4,
    Excellent = 5
};

struct Student
{
    std::string Name;
    int Year;
    std::map<std::string, Score> RecordBook;
};

using Groups = std::map<std::string, std::vector<Student>>;

void saveToFile(const std::string& filename, const Groups& groups);
void loadFromFile(const std::string& filename, Groups& outGroups);
