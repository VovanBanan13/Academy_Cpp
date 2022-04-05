#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");

	int x, y, ans;
	int choice, questCount = 0;
	int minNumber = 0, maxNumber = 9;
	int countOk = 0 ;

	cout << "\t*** �������� ������� ��������� ***" << endl << endl;

	cout << "������ ���������:" << endl;
	cout << "1 - �����" << endl;
	cout << "2 - ������" << endl;
	cout << "3 - ������" << endl;
	cout << "����� ������� ���������: ";
	cin >> choice;

	switch (choice) {
	case 1: {
		cout << "������ ������ ������� ���������\n" << endl;
		questCount = 3;
		minNumber = 0;
		maxNumber = 4;
		break;
	}
	case 2: {
		cout << "������ ������� ������� ���������\n" << endl;
		questCount = 5;
		minNumber = 1;
		maxNumber = 6;
		break;
	}
	case 3: {
		cout << "������ ������� ������� ���������\n" << endl;
		questCount = 7;
		minNumber = 3;
		maxNumber = 9;
		break;
	}
	default:
		cout << "�������� ��������" << endl;
		break;
	}

	for (int i = 0; i < questCount; i++) {
		x = rand() % maxNumber + minNumber;
		y = rand() % maxNumber + minNumber;
		cout << "\t" << i+1 << ") " << x << " * " << y << " = ";
		cin >> ans;
		if (x * y == ans) {
			countOk++;
		}
	}
	cout << "\n���� ��������, ��������� ������� " << countOk << " �� " << questCount;
	
	cout << endl << endl << endl;
	system("pause");
	return 0;
}
