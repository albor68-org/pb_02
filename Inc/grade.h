//
// Created by Карим Бутмир on 3/31/25.
//

#ifndef GRADE_H
#define GRADE_H

#include "student_info.h"

double grade(double midterm, double final, double homework);
double grade(double midterm, double final, std::vector<double> &hw);
double grade (Student_info& s);


#endif //GRADE_H
