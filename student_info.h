#pragma once

#include <string>
#include <vector>
#include <iostream>

using std::vector;
using std::istream;
using std::string;

struct studentInfo {
	std::string name;
	double midterm;
	double final;
	std::vector<double> homework;
};

bool compare(const studentInfo& x, const studentInfo& y);

std::istream& read_hw(std::istream& in, std::vector<double>& hw);

std::istream& read(std::istream& is, studentInfo& s); 