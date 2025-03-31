#pragma once

#include <iostream>
#include <vector>
#include <string>

struct Student_info {
	std::string name;
	double midterm;
	double final;
	std::vector<double> homework;
};

bool compare(const Student_info& x, const Student_info& y);

std::istream& read(std::istream& is, Student_info& s);

std::istream& read_hw(std::istream& in, std::vector<double>& hw);





