/// @file
/// Приветствие в рамке

#include <iostream>
#include <string>

int main() {

    std::cout << "Пожалуйста, введите свое имя: ";
    std::string name;
    std::cin >> name;  // Исправлено: neme -> name

    // Создание переменной, содержащей персональное приветствие
    const std::string greeting = "Здравствуй, " + name + "!";

    // Конструирование второй и четвертой строк выводимой "картинки"
    // Дополнительная "математика" связана с кодировкой символов, не принадлежащих английскому алфавиту
    const std::string spaces((greeting.size() - 3) / 2 + 3, ' ');
    const std::string second = "* " + spaces + " *";

    // Конструирование первой и пятой строк выводимой "картинки"
    const std::string first(second.size(), '*');  // Исправлено: второй аргумент для std::string должен быть числом

    // Вывод приветствия в рамке
    std::cout << std::endl;
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << "* " << greeting << " *" << std::endl;  // Исправлено: выводим greeting, а не second
    std::cout << second << std::endl;
    std::cout << first << std::endl;

    return 0;
}