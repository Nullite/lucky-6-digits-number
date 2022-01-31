#include <iostream>
#include <string>
#include <vector>
#include "handler.h"

std::vector<char> splitNum(int num)
{
	std::string convertNum = std::to_string(num);
	std::vector<char> digits;

	for (int i = 0; i < convertNum.length(); i++)
	{
		digits.push_back(convertNum[i]);
	}

	return digits;
}

bool isLucky(const std::vector<char> &digits)
{
	int sumFirst = 0;
	int sumSecond = 0;

	for (int i = 0; i < digits.size(); i++)
	{
		if (i < 3)
		{
			int digit = digits[i] - '0';
			sumFirst += digit;
		}
		else
		{
			int digit = digits[i] - '0';
			sumSecond += digit;
		}
	}

	if (sumFirst == sumSecond) return true;
	return false;
}
