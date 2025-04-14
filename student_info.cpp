#include "student_info.h"
#include "locale_string.h"
#include "grade.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>


//==============================================================================
std::istream& read_hw (std::istream& in, std::vector<double>& hw) {
	if (in) {
		hw.clear();
		
		for (double x; in >> x;) hw.push_back(x);

		in.clear();
	}
	return in;
}


//==============================================================================
std::istream& read (std::istream& is, Student_info& s) {
	is >> s.name >> s.midterm >> s.final;
	read_hw(is, s.homework);

	return is;
}


//==============================================================================
bool compare (const Student_info& x, const Student_info& y) {
	return x.name < y.name;
}

void print_student_grade(const std::string& name, std::size_t maxlen, double final_grade) {
    std::size_t name_len = string_lenght(name);
    std::size_t padding = (maxlen + 2 > name_len) ? maxlen + 2 - name_len : 0;std::cout << name << std::string(padding, ' ');

    std::streamsize prec = std::cout.precision();
    std::cout << std::setprecision(3) << final_grade << std::setprecision(prec);
    std::cout << std::endl;
}
void print_grade_error(const std::string& name, std::size_t maxlen, const char* message) {
    std::size_t name_len = string_lenght(name);
    std::size_t padding = (maxlen + 2 > name_len) ? maxlen + 2 - name_len : 0;

    std::cout << name << std::string(padding, ' ') << message << std::endl;
}

std::vector<Student_info> extract_fails(std::vector<Student_info>& students) {
    std::vector<Student_info> fails;

    auto it = students.begin();
    while (it != students.end()) {
        if (f_grade(*it)) {
            fails.push_back(*it);
            it = students.erase(it);
        } else {
            ++it;
        }
    }

    return fails;
}