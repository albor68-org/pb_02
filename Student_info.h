#pragma once
#include <string>
#include <vector>
using std::istream;
using std::vector;
using std::string;

struct Student_info {
	string name;
	double midterm;
	double final;
	vector<double> homework;
};

istream& read_hw (istream& in, vector<double>& hw);
istream& read (istream& is, Student_info& s);
bool compare (const Student_info& x, const Student_info& y);

