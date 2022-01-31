#include <iostream>
#include <string>
#include "check.h"

bool isCorrectNum(int num)
{
	std::string checkNum = std::to_string(num);
	if (checkNum.length() != 6) throw 2;
	return true;
}
