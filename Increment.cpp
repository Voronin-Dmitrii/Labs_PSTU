﻿#include <iostream>     // Добавление библеотеки ввода и вывода
using namespace std;     // Объявление пространства имен std

int main()        // Обязательная функия main
{
    int i = 1;      // Объявление целочисленной переменной
    cout << ++i * i++;  // Вывод. Префиксный инкремент увеличивает i на 1, а постфиксный увеличит после этой строки, поэтому 2 умножается на 2 и выводится 4.
}
