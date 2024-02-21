#include <vector>
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int intCheck(int integer) {
	while (std::cin.fail() || integer < 2 || integer > 69) {
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "Ошибка, вы должны выбрать целое число между 2 и 69" << std::endl << "Введите число ещё раз: " << std::endl;
		std::cin >> integer;
	}
	return integer;
}

void reversePolishNotation(std::string expression) {

	//бегать по строке, выписывая в 2 массива числа и операнды
	
	

}

int main()
{
	setlocale(LC_ALL, "RU");
    cout << "Добро пожаловать в калькулятор версии 0.1.2!" << endl;
    cout << "В какой системе счисления будете вводить значения? (2-69)" << endl;
    int sys = 69;
	cin >> sys;
	std::string expression;
    sys = intCheck(sys);
	cout << "Введите математическое выражение для подсчёта в " << sys << "-ричной системе счисления." << endl;
	cout << "(+ СЛОЖЕНИЕ - ВЫЧИТАНИЕ * УМНОЖЕНИЕ / ДЕЛЕНИЕ, СКОБКИ И ПРОБЕЛЫ ДЛЯ РАЗДЕЛЕНИЯ ЧИСЕЛ)";
	std::getline(cin, expression);
	std::vector <char> operators;
	reversePolishNotation(expression);
	
	






}












