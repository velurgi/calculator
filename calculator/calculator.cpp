#include <vector>
#include <iostream>
#include <string>
#include <Windows.h>
#include <regex>

using std::cout;
using std::cin;
using std::endl;

int intCheck(int integer) {
	while (std::cin.fail() || integer < 2 || integer > 36) {
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "Ошибка, вы должны выбрать целое число между 2 и 69" << std::endl << "Введите число ещё раз: " << std::endl;
		std::cin >> integer;
	}
	return integer;
}

void reversePolishNotation(std::string expression, std::vector <int> &before) {
	for (int i = 0; i < expression.size(); i++) {
		if (1 == 1) {
			cout << expression.size() << endl;
		}
	} 
}


std::string findAlphanumeric(const std::string& input) {
	std::regex pattern("[a-zA-Z0-9]+");
	std::smatch match;
	std::string result;

	// Находим все совпадения с регулярным выражением
	for (std::sregex_iterator it(input.begin(), input.end(), pattern); it != std::sregex_iterator(); ++it) {
		result += it->str();
	}

	return result;
}


void changeNumberSystem(std::string &expression, int sys, int targetSys) {
	for (int i = 0; i < expression.size(); i++) {
		if (47 < expression[i] < 58)

	}


}

int main()
{
	setlocale(LC_ALL, "RU");
    cout << "Добро пожаловать в калькулятор версии 0.1.2!" << endl;
    cout << "В какой системе счисления будете вводить значения? (2-36)" << endl;
    int sys = 69;
	cin >> sys;
    sys = intCheck(sys);
	cout << "Введите математическое выражение для подсчёта в " << sys << "-ричной системе счисления." << endl;
	cout << "(+ СЛОЖЕНИЕ - ВЫЧИТАНИЕ * УМНОЖЕНИЕ / ДЕЛЕНИЕ, СКОБКИ И ПРОБЕЛЫ ДЛЯ РАЗДЕЛЕНИЯ ЧИСЕЛ)" << endl;
	std::string expression;
	cin.ignore(1000, '\n');
	getline(cin, expression);
	std::vector <char> operators;
	std::vector <int> before;	
	reversePolishNotation(expression, before);
	
	return 0;
}












