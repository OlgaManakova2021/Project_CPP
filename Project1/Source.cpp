#include <iostream> //����� ��� ���������� �����-������
#include <Windows.h> // ����� ��� ����������� ����� ������, ��������, ���������� �������, �������� � �. �.
#include <cmath>// ����� ��� �������������� ����������

int main()
{
	using namespace std;

	SetConsoleCP(1251); // ��������� ������� �������� win-cp 1251 � ����� �����
	SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������
	
	/*
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
	*/

	//�������, ��������� � 0;

	float array[3] = {3.4, 8, -15.6};
	cout << array[2] << endl;

	int arr[3][2] = {{23, 16}, {45, 1}, {78, 100}};
	cout << arr[2][1] << endl;

	//���� for

	cout << "����� �������� ����������� �����" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << sqrt(i) << endl;

	}
	
	//����� ����������� �������

	for (int i = 0; i < 3; i++)
	{
		cout << "��� array [" << i << "] :" << array[i] << endl;
	}

	//����� ���������� �������

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++) 
		{
			cout << arr[i][j] << endl;
		}
	}

	return 0;
}