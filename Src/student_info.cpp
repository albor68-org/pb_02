/**
 * @file student_info.cpp
 * @brief файл содержит функции для заполнения визуализации структур данных
 * @author Карим Бутмир
 */


#include "student_info.h"
#include <iostream>

/**
 * @brief функция для заполнения массива заданной функцией
 * @param[out] vec массив, который нужно заполнить
 * @param[in] in функцияя, которая читает данные из источника ввода данных
 * @param[out] max_len ссылка на счетчик элементов
 * @return возвращает истину при успешном заполнение массива
 */
bool fill_student_info_and_count(std::vector<Student_info> &vec, std::istream& (*in)(std::istream&, Student_info&), size_t &max_len) {
    for (Student_info record; in(std::cin,record);) {
        max_len = std::max(max_len, record.name.size() / 2);
        vec.push_back(record);
    }
    return true;
}

/**
 * @brief функция для вывода данные в стандартный вывод
 * @param[out] vec массив, который нужно вывесити
 * @param[in] func ссылка на функцию, для дополнительного функционала
 * @param[in] max_len ссылка на счетчик элементов
 * @return возвращает истину при успешном выводе данных
 */
bool print_student_info_with_exfunc(std::vector<Student_info> &vec, bool (*func)(Student_info&), const std::string::size_type &max_len ) {
    for (auto & i : vec) {
        std::cout << i.name << std::string(max_len + 3 - i.name.size() / 2, ' ');
        func(i);
        std::cout << std::endl;
    }
    return true;
}

/**
 * @brief функция для сравнения имен двух структур
 * @param[in] x ссылка на первую структуру
 * @param[in] y ссылка на вторую стуктуру
 * @return возвращает истину при ???
 */
bool compare(const Student_info& x, const Student_info& y) { // TODO: переименовать функцию, она не отражает своего функционала
    return x.name < y.name;
}