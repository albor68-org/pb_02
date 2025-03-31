#include "student_info.h"
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iostream>
double grade (double midterm, double final, double homework);
double grade (double midterm, double final, const std::vector<double>& hw);
double grade (const student_info& s) ;