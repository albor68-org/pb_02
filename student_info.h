#pragma once
#include <string>
#include <vector>
using std::istream;
using std::vector;
using std::string;

struct student_info {
	string name;
	double midterm;
	double final;
	vector<double> homework;
};

istream& read_hw (istream& in, vector<double>& hw);
istream& read (istream& is, student_info& s);
bool compare (const student_info& x, const student_info& y);
	