#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");

	int x, y, ans;
	int choice, questCount = 0;
	int minNumber = 0, maxNumber = 9;
	int countOk = 0 ;

	cout << "\t*** Проверка таблицы умножения ***" << endl << endl;

	cout << "Уровни сложности:" << endl;
	cout << "1 - Легко" << endl;
	cout << "2 - Средне" << endl;
	cout << "3 - Сложно" << endl;
	cout << "Введи уровень сложности: ";
	cin >> choice;

	switch (choice) {
	case 1: {
		cout << "Выбран легкий уровень сложности\n" << endl;
		questCount = 3;
		minNumber = 0;
		maxNumber = 4;
		break;
	}
	case 2: {
		cout << "Выбран средний уровень сложности\n" << endl;
		questCount = 5;
		minNumber = 1;
		maxNumber = 6;
		break;
	}
	case 3: {
		cout << "Выбран сложный уровень сложности\n" << endl;
		questCount = 7;
		minNumber = 3;
		maxNumber = 9;
		break;
	}
	default:
		cout << "Неверная операция" << endl;
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
	cout << "\nТест завершен, правильно ответов " << countOk << " из " << questCount;
	
	cout << endl << endl << endl;
	system("pause");
	return 0;
}
