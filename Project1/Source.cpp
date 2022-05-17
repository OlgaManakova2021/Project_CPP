/* Программа расчета площади прямоугольника*/

#include <iostream> //класс для оганизации ввода-вывода
#include <Windows.h> // класс для определений типов данных, макросов, прототипов функций, констант и т. д.


int main()
{
	using namespace std;

	SetConsoleCP(1251); // установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода

	int length;
	int width;

	cout << "Введи длину: ";
	cin >> length;

	cout << "Введи ширину: ";
	cin >> width;

	int S = length * width;

	cout << "Площадь равна: ";
	cout << S << endl;

	// оператор if; если на ветках по одному оператору, то {} не обязательны. if можно вкладывать друг в друга
	if (S > 0) {
		cout << "Значение площади корректное" << endl;
	} 
	else {
		cout << "Внимание! Значение площади некорректное" << endl;
	}

	//оператор switch; default не является обязательным

	int NumS;

	cout << "Введи число от 2-5: ";
	cin >> NumS;

	switch (NumS)
	{
	case 2:
		cout << "Оценка неудовлетвоительно" << endl;
		break;

	case 3:
		cout << "Оценка удовлетвоительно" << endl;
		break;
	
	case 4:
		cout << "Оценка хорошо" << endl;
		break;

	case 5:
		cout << "Оценка отлично" << endl;
		break;

	default:
		cout << "Такой	оценки не существует" << endl;
		break;
	}
	


	return 0;
}