/* ��������� ������� ������� ��������������*/

#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251); // ��������� ������� �������� win-cp 1251 � ����� �����
	SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������

	int length;
	int width;

	cout << "����� ����� 1: ";
	cin >> length;

	cout << "����� ������: ";
	cin >> width;

	int S = length * width;

	cout << "������� �����: ";
	cout << S << endl;

	/*cout << "����� �����: ";

	char string[20];
	cin >> string;
	cout << string << endl;

	/* ���
	cout << "������� �����: ";
	cin >> length * width;
	*/

	return 0;

	//http://cppstudio.com/post/435/
}