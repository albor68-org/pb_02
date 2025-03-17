/// @file
/// Приветствие в рамке


#include <iostream>
#include <string>

bool is_acsii(const std::string bytes);

int main () {

	std::cout << "Пожалуйста, введите свое имя: ";
	std::string name;
	std::cin >> name;

	// Создание переменной, содержащей персональное приветствие
	const std::string greeting = "Здравствуйте, " + name + '!';
	std::cout << greeting.size() << std::endl;
	// Конструирование второй и четвертой строк выводимой "картинки"
	// Дополнительная "математика" связана с кодировкой символов, не принадлежащих английскому алфавиту

	int s_len = is_acsii(name) ? name.size() : 0;

	// TODO: учитывать длинну каждого символа при расчете длинны строки
	
	const std::string spaces(((greeting.size() - 4 - s_len) / 2) + 4 + s_len, ' '); // Вычитаем 3 символа из ACSII и один указывающий на конец строки
	const std::string second = "* " + spaces + " *";

	// Конструирование первой и пятой строк выводимой "картинки"
	const std::string first(second.size(), '*');

	// Вывод приветствия в рамке
	std::cout << std::endl;
	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << "* " << greeting << " *" << std::endl;
	std::cout << second << std::endl;
	std::cout << first << std::endl;

	return 0;
}


/*!
	Определяет кодировку входной строки
	\param[in] bytes Исходная строка
	\return true если строка содержит ACSII, false если в строке содержиться символ в кодировке UTF-XX
*/
bool is_acsii(const std::string bytes){
	for (auto byte : bytes) {
		if (byte & 0x80) return false;
	}
	return true;	
}