#include <vector>
#include <stdexcept>
#include <algorithm>

double median (std::vector<double> vec) {
	size_t size = vec.size();
	if (size == 0) throw std::domain_error("Вектор пуст! Вычисление медианы невозможно.");

	std::sort(vec.begin(), vec.end());
	size_t mid = size / 2;

	return size % 2 == 0 ? (vec[mid] + vec[mid-1]) / 2 : vec[mid];
}