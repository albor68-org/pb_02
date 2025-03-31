/**
 * @file median.cpp
 * @brief файл содержит необходимые функции для вычисления медианного значения массива
 * @author Карим Бутмир
 */

#include "median.h"
#include <stdexcept>
#include <algorithm>

using std::vector;
using std::domain_error;

/**
 * @brief функция по расчету медианного значения из массива
 * @param vec[in] ссылка на массив, из которого нужно рассчитать медианное значение
 * @throw domain_error в случае передачи пустого массива
 * @return медианное значение массива
 */
double median(vector<double> vec) {
	size_t size = vec.size();
	if (size == 0) throw domain_error("Вектор пуст! Вычисление медианы невозможно.");

	std::sort(vec.begin(), vec.end());
	size_t mid = size / 2;

	return size % 2 == 0 ? (vec[mid] + vec[mid-1]) / 2 : vec[mid];
}
