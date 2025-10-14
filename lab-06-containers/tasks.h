#pragma once

#include <vector>
#include <string>
#include <list>
#include <map>

// task1
std::vector<int>::iterator Find(std::vector<int>::iterator first, std::vector<int>::iterator last, int el);

// task2
std::vector<int>::iterator findInSorted(std::vector<int>::iterator first, std::vector<int>::iterator last, int el);

// task3
int wordsCounter(const std::string& str);

// task4
std::map<std::string, int> wordsMapCounter(const std::string& str);

// task5
std::vector<std::string> uniqueWords(const std::string& str);

// task6
int diffWordsCounter(const std::string& str);

// task7
void reverseNum(std::list<int>& input);

// task8
void plusesDeleter(std::vector<int>& input);

// task9
void Sort(std::list<int>& input);