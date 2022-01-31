#include <iostream>
#include "input.h"

int getNum()
{
	int num;

	std::cout << "Enter a six-digits number and programm will check if it is lucky! (number can not start from 0).\n";
	std::cin >> num;

	if (!std::cin >> num) throw 1;
	return num;
}