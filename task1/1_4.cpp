﻿//Инвертирование бита
//Инвертируйте значение бита в числе N по его номеру K.
//
//Необходимо использование битовых операций.
//Использование арифметических операций запрещено.

#include <iostream>

int main() {
	unsigned int n, k;
	std::cin >> n;
	std::cin >> k;
	n ^= (1 << k);
	std::cout << n;
}
