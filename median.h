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
double median (vector<double> vec) {
	size_t size = vec.size();
	if (size == 0) throw domain_error("Вектор пуст! Вычисление медианы невозможно.");

	sort(vec.begin(), vec.end());
	size_t mid = size / 2;

	return size % 2 == 0 ? (vec[mid] + vec[mid-1]) / 2 : vec[mid];
}
