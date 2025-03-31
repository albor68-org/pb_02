#include "grade.h"
#include "median.h"
#include "student_info.h"

#include <algorithm>
#include <stdexcept>
#include <vector>

//==============================================================================
double grade (double midterm, double final, double homework) {
	return (0.2 * midterm + 0.4 * final + 0.4 * homework);
}


//==============================================================================
double grade (double midterm, double final, const std::vector<double>& hw) {
	if (hw.size() == 0) throw std::domain_error("Отсутствуют оценки за самостоятельные работы!");

	return grade(midterm, final, median(hw));
}


//==============================================================================
double grade (const studentInfo& s) {
	return grade(s.midterm, s.final, s.homework);
}
