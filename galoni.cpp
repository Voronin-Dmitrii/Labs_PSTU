﻿#include <iostream>     // Добавление библеотеки ввода и вывода
using namespace std;    // Объявление пространства имен std

int main()
{
    setlocale(LC_ALL, "ru");  // Функция для Русского языка при выводе в консоле
    float x;                    // Объявление вещественной переменной
    cout << "Введите кол-во кубических футов: ";
    cin >> x;                              // Ввод
    cout << "В галлонах: " << x / 7.481;    // Вывод с делением переменной x на 7.481
}
