#include <algorithm>
#include <stdexcept>
#include <vector>

using std::domain_error;
using std::size_t;
using std::sort;
using std::vector;

double median (vector<double> vec) {
	size_t size = vec.size();
	if (size == 0) throw domain_error("Вектор пуст! Вычисление медианы невозможно.");

	sort(vec.begin(), vec.end());
	size_t mid = size / 2;

	return size % 2 == 0 ? (vec[mid] + vec[mid-1]) / 2 : vec[mid];
}
