//
// Created by sempai on 3/31/25.
//

#ifndef STUDENT_INFO_H
#define STUDENT_INFO_H

#include <vector>
#include <string>


struct Student_info {
    std::string name;
    double midterm;
    double final;
    std::vector<double> homework;
};

bool fill_student_info_and_count(std::vector<Student_info> &vec, std::istream& (*in)(std::istream&, Student_info&),size_t &max_len);
bool print_student_info_with_exfunc(std::vector<Student_info> &vec, bool (*func)(Student_info&), const std::string::size_type &max_len );
bool compare(const Student_info& x, const Student_info& y);

#endif //STUDENT_INFO_H
