#include "locale_string.h"
#include "student_info.h"
#include "grade.h"

#include <algorithm>
#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>


//==============================================================================
int main () {
	std::vector<Student_info> students;
	std::size_t maxlen = 0;

	for (Student_info record; read(std::cin, record);) {
		maxlen = std::max(maxlen, string_lenght(record.name));
		students.push_back(record);
	}

    std::vector<Student_info> fails = extract_fails(students);

    std::sort(students.begin(), students.end(), compare);

    for (const auto& s : students) {
        try {
            double final = grade(s);
            print_student_grade(s.name, maxlen, final);
        } catch (std::domain_error& e) {
            print_grade_error(s.name, maxlen, e.what());
        }
    }

    std::cout << std::endl << "Неаттестованы:" << std::endl << std::endl;

    std::sort(fails.begin(), fails.end(), compare);

    for (const auto& s : fails) {
        try {
            double final = grade(s);
            print_student_grade(s.name, maxlen, final);
        } catch (std::domain_error& e) {
            print_grade_error(s.name, maxlen, e.what());
        }
    }

    return 0;
}