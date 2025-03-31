#ifndef GRADE_H      // Проверяем, объявлен ли уже этот файл
#define GRADE_H     // Если нет, объявляем

#include <vector>
#include "Student_info.h"

double grade (double midterm, double final, double homework);
double grade (double midterm, double final, const std::vector<double>& hw);
double grade (const Student_info& s);

#endif