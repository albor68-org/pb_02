#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    cout << "Пожалуйста, введите свое имя: ";
    string name;
    cin >> name;

    const string greeting = "Здравствуй, " + name + "!";
    const int pad = 2;

    // Вычисление размеров "картинки" с учетом полей
    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;

    cout << endl;

    for (int r = 0; r != rows; ++r) {
        string::size_type c = 0;

        while (c != cols) {
            // Если это граница (первая или последняя строка, или первый/последний символ в строке)
            if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
                cout << '*';
                ++c;
            }
            // Если это строка с приветствием
            else if (r == pad + 1) {
                // Выводим пробелы до приветствия
                if (c == pad + 1) {
                    cout << greeting;
                    c += greeting.size();
                } else {
                    cout << ' ';
                    ++c;
                }
            }
            // Для остальных строк (пробелы внутри рамки)
            else {
                cout << ' ';
                ++c;
            }
        }

        cout << endl;
    }

    return 0;
}
