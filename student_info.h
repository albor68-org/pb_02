#ifndef STUDENT_INFO
#define STUDENT_INFO

#include <string>
#include <vector>
#include <iostream>
#include "locale_string.h"

struct Student_info {
	std::string name;
	double midterm;
	double final;
	std::vector<double> homework;
};
std::istream& read_hw(std::istream& in, std::vector<double>& hw);
std::istream& read(std::istream& is, Student_info& s);
bool compare(const Student_info& x, const Student_info& y);
void print_student_grade(const std::string& name, std::size_t maxlen, double final_grade);
void print_grade_error(const std::string& name, std::size_t maxlen, const char* message);
std::vector<Student_info> extract_fails(std::vector<Student_info>& students);
#endif // STUDENT_INFO
