﻿#include <iostream>   // Добавление библеотеки ввода и вывода
using namespace std;   // Объявление пространства имен std

int main()
{
    setlocale(LC_ALL, "ru"); // Функция для Русского языка при выводе в консоле
    char a, b, c, d, e; // Объявляем переменные, тип данный char(символьный)
    cout << "Введите 5 символов:" << endl;
    cin >> a >> b >> c >> d >> e;
    cout << "В обратной последовательности: " << e << d << c << b << a; // Вывод переменных в обратной последовательности
}
