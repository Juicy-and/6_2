#include <iostream>
#include <string>
#include "counter.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	std::string command;
	int y;
	char tmp;
	Counter* counter = nullptr;
	std::cout << "Вы хотите указать начальное значение счётчика? Введите yes или no: ";
	std::cin >> command;
	if (command == "yes") {
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> y;
		counter = new Counter(y);
	}
	else if (command == "no")
		counter = new Counter;
	do {
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> tmp;
		switch (tmp)
		{
		case '+':

			counter->plus();
			std::cout << counter->get_num() << std::endl;
			break;
		case '-':

			counter->minus();
			std::cout << counter->get_num() << std::endl;
			break;
		case '=':
			std::cout << counter->get_num() << std::endl;
			break;

		case 'x':
			std::cout << "До свидания!" << std::endl;
			break;
		default:
			std::cout << "Неизвестная команда!" << std::endl;
		}
	} while (tmp != 'x');
}