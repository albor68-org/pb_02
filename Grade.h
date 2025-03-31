#include "Student_info.h"

#include <string>
#include <vector>

double grade (double midterm, double final, double homework);

double grade (double midterm, double final, const std::vector<double>& hw);

double grade (const Student_info& s);

