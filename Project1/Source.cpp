/* ��������� ������� ������� ��������������*/

#include <iostream> //����� ��� ���������� �����-������
#include <Windows.h> // ����� ��� ����������� ����� ������, ��������, ���������� �������, �������� � �. �.


int main()
{
	using namespace std;

	SetConsoleCP(1251); // ��������� ������� �������� win-cp 1251 � ����� �����
	SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������

	int length;
	int width;

	cout << "����� �����: ";
	cin >> length;

	cout << "����� ������: ";
	cin >> width;

	int S = length * width;

	cout << "������� �����: ";
	cout << S << endl;

	// �������� if; ���� �� ������ �� ������ ���������, �� {} �� �����������. if ����� ���������� ���� � �����
	if (S > 0) {
		cout << "�������� ������� ����������" << endl;
	} 
	else {
		cout << "��������! �������� ������� ������������" << endl;
	}

	//�������� switch; default �� �������� ������������

	int NumS;

	cout << "����� ����� �� 2-5: ";
	cin >> NumS;

	switch (NumS)
	{
	case 2:
		cout << "������ ������������������" << endl;
		break;

	case 3:
		cout << "������ ����������������" << endl;
		break;
	
	case 4:
		cout << "������ ������" << endl;
		break;

	case 5:
		cout << "������ �������" << endl;
		break;

	default:
		cout << "�����	������ �� ����������" << endl;
		break;
	}
	


	return 0;
}