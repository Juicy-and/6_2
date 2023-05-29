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
	std::cout << "�� ������ ������� ��������� �������� ��������? ������� yes ��� no: ";
	std::cin >> command;
	if (command == "yes") {
		std::cout << "������� ��������� �������� ��������: ";
		std::cin >> y;
		counter = new Counter(y);
	}
	else if (command == "no")
		counter = new Counter;
	do {
		std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
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
			std::cout << "�� ��������!" << std::endl;
			break;
		default:
			std::cout << "����������� �������!" << std::endl;
		}
	} while (tmp != 'x');
}