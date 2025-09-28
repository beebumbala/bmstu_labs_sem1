#ifndef BMSTU_LABS_SEM1_TASKS_H
#define BMSTU_LABS_SEM1_TASKS_H
#include <string>

// task1
void multi_2(int* input, unsigned int size);
void reduce_a(int* input, unsigned int size);
void div_on_first(float* input, unsigned int size);

// task2
int sum_array(const int* input, unsigned int size);
int sum_squares(const int* input, unsigned int size);
int sum_six(const int* input, unsigned int size);
int sum_k(const int* input, unsigned int size, int k1, int k2);
float mean(const int* input, unsigned int size);
float mean_k(const int* input, unsigned int size, int s1, int s2);

// task3
void replace_3(int* input);

//task4
void remove_first_negative(int* input, int& size);
void remove_last_even(int* input, int& size);

// task5
bool is_city_length_even(const std::string &city);

// task6
bool is_first_longer(const std::string& s1, const std::string& s2);

// task7
void get_longest_shortest(const std::string& s1, const std::string& s2, const std::string& s3, std::string& the_longest, std::string& the_shortest);

// task8
std::string get_slice(const std::string& input, int start, int end);

// task9
std::string add_stars(const std::string& input);

// task10
float count_a_percent(const std::string& input);

// task11
std::string replace_can(const std::string& input);


#endif