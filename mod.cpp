#include "student_info.cpp"
#include "median.cpp"
#include "grade.cpp"
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

using std::max;

using std::cin;
using std::cout;
using std::domain_error;
using std::endl;
using std::istream;
using std::ostream;
using std::setprecision;
using std::setw;
using std::sort;
using std::streamsize;
using std::string;
using std::vector;

//==============================================================================
int main () {
	vector<StudentInfo> students;
	string::size_type maxlen = 0;

	for (StudentInfo record; read(cin, record);) {
		maxlen = max(maxlen, record.name.size() / 2);
		students.push_back(record);
	}

	sort(students.begin(), students.end(), compare);

	for (vector<StudentInfo>::size_type i = 0; i != students.size(); ++i) {

		cout << students[i].name
		     << string(maxlen + 1 - students[i].name.size() / 2, '.');

		try {
			double final_grade = grade(students[i]);
			streamsize prec = cout.precision();
			cout << setprecision(3) << final_grade << setprecision(prec);
		}
		catch (domain_error e) {
			cout << e.what();
		}

		cout << endl;
	}

	return 0;
}
