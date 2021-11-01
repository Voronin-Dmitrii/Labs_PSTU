#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int a = 0, b  = 0, c = 0, x = 0;
	bool F = false;
	cout << "Введите трёхзначное число: ";
	cin >> x;
	F = (x < 100) || (x > 999) || (a == b) || (a == c) || (b == c);
	a = x % 10;
	x /= 10;
	b = x % 10;
	c = x / 10;
	while (F == true) {
		cin >> x;
		F = (x < 100) || (x > 999) || (a == b) || (a == c) || (b == c);
		a = x % 10;
		x /= 10;
		b = x % 10;
		c = x / 10;
	}
	cout << a << b << c << endl;
	cout << a << c << b << endl;
	cout << b << a << c << endl;
	cout << b << c << a << endl;
	cout << c << b << a << endl;
	cout << c << a << b << endl;
	cout << "Самое большое число: ";
	F = (a > c) && (a > b);
	if (F) 
		cout << a << fmax(b, c) << fmin(b, c);
	F = (b > c) && (b > a);
	if (F)
		cout << b << fmax(a, c) << fmin(a, c);
	F = (c > a) && (c > b);
	if (F)
		cout << c << fmax(b, a) << fmin(b, a);
	return 0;
}
