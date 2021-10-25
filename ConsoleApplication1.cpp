#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int a = rand() % 99 + 1, x;
	cout << "У вас есть 6 попыток угадать число от 1 до 99: ";
	for (int i = 5; i > -1; i--) {
		cin >> x;
		if (x == a) {
			cout << "Вы угадали число!";
			break;
		}
		else
			if (i > 0)
			    cout << "Попыток осталось: " << i << endl << "Введите число: ";
		if (i == 0)
			cout << "Попытки кончились";
	}
	return 0;
	
}

