//
// Created by Карим Бутмир on 3/31/25.
//
#include <algorithm>
#include <iomanip>
#include <iostream>
#include "student_info.h"
#include "median.h"
#include "grade.h"

using namespace std;

istream& read_hw (istream& in, vector<double>& hw);
istream& read (istream& is, Student_info& s);
bool count_and_print(Student_info& student);

int main(int argc, const char * argv[]) {
    vector<Student_info> students;
    size_t max_len = 0;

    fill_student_info_and_count(students, read, max_len);
    sort(students.begin(), students.end(), compare);
    print_student_info_with_exfunc(students, count_and_print, max_len);

}

istream& read_hw (istream& in, vector<double>& hw) {
    if (in) {
        hw.clear();
        for (double x; in >> x;) hw.push_back(x);
        in.clear();
    }
    char b;
    in >> b;
    return in;
}

istream& read (istream& is, Student_info& s) {
    is >> s.name >> s.midterm >> s.final;
    read_hw(is, s.homework);

    return is;
}

bool count_and_print(Student_info& student) {
    try {
        double final_grade = grade(student);
        streamsize prec = cout.precision();
        cout << setprecision(3) << final_grade << setprecision(prec);
    }
    catch (domain_error e) {
        cout << e.what();
    }
    return true;
}
