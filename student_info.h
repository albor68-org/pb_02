#pragma once


#include <string>
#include <vector>
#include <iostream>
using std::vector;
using std::istream;
using std::string;

struct Student_info {
	string name;
	double midterm;
	double final;
	vector<double> homework;
};

bool compare (const Student_info& x, const Student_info& y);
std::istream& read_hw(std::istream& in, std::vector<double>& hw);

std::istream& read(std::istream& is,Student_info& s);