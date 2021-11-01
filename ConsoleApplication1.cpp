#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int a = rand() % 100 + 1, x;
	cout << "У вас есть 6 попыток угадать число от 1 до 100: ";
	for (int i = 5; i > -1; i--) {
		cin >> x;
		if (x == a) {
			cout << "Вы угадали число!";
			break;
		}
		else
			if (i > 0)
				cout << "Попыток осталось: " << i << endl 
				    << "Загаданное число " 
				        << ((x < a) ? "больше " : "меньше ") << x << endl 
				            << "Введите число: ";
		if (i == 0)
			cout << "Попытки кончились. Загаданное число: " << a;
	}
	return 0;

}
