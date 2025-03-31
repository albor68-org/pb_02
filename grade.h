#ifndef GUARD_grade_h
#define GUARD_grade_h
#include<vector>
#include"Student_info.h"
using std::vector;

double grade (double midterm, double final, double homework);
double grade (double midterm, double final, const vector<double>& hw);
double grade (const Student_info& s);

#endif