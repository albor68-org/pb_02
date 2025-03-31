/**
 * @file grade.cpp
 * @brief файл содержит функции для расчета отценок
 * @author Карим Бутмир
 *
 */

#include <stdexcept>
#include "median.h"
#include "grade.h"
#include "student_info.h"

/**
 * @brief функция для расчета итоговой оценки по трем оценкам
 * @param[in] midterm оценка за первое тестирование
 * @param[in] final оценка за второе тестирование
 * @param[in] homework оценка за домашнюю работу
 * @retun оценка
 */
double grade(const double midterm, const double final, const double homework) {
    return (0.2 * midterm + 0.4 * final + 0.4 * homework);
}

/**
 * @brief функция для расчета итоговой оценки по трем оценкам
 * @param[in] midterm оценка за первое тестирование
 * @param[in] final оценка за второе тестирование
 * @param[in] hw массив с оценками за самостоятельные работы
 * @throw std::domain_error если массив пустой
 * @return оценка
 */
double grade(double midterm, double final, std::vector<double> &hw) {
    if (hw.size() == 0) throw std::domain_error("Отсутствуют оценки за самостоятельные работы!");

    return grade(midterm, final, median(hw));
}

/**
 * @brief функция для расчета итоговой оценки по трем оценкам
 * @param[in] s ссылка на структуру Student_info
 * @return оценка
 */
double grade (Student_info& s) {
    return grade(s.midterm, s.final, s.homework);
}
