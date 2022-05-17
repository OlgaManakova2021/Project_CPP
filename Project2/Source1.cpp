/* Программа расчета площади прямоугольника*/

#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251); // установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода

	int length;
	int width;

	cout << "Введи длину 1: ";
	cin >> length;

	cout << "Введи ширину: ";
	cin >> width;

	int S = length * width;

	cout << "Площадь равна: ";
	cout << S << endl;

	/*cout << "Введи слово: ";

	char string[20];
	cin >> string;
	cout << string << endl;

	/* или
	cout << "Площадь равна: ";
	cin >> length * width;
	*/

	return 0;

	//http://cppstudio.com/post/435/
}