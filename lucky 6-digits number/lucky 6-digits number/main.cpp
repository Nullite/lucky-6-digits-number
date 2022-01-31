#include <iostream>
#include "input.h"
#include "check.h"
#include "handler.h"
#include "output.h"

int main()
{
	int num;
	try 
	{
		 num = getNum();
		 isCorrectNum(num);
	}
	catch (int exeption)
	{
		if (exeption == 1)
		{
			std::cout << "\x1b[31mError: \x1b[0m" << exeption <<"\n\x1b[31mNot a number entered\x1b[0m\n";
			return -1;
		}
		if (exeption == 2)
		{
			std::cout << "\x1b[31mError: \x1b[0m" << exeption << "\n\x1b[31mIncorrect length of number\x1b[0m\n";
			return -2;
		}
	}
	
	const std::vector<char> digits = splitNum(num);
	printResult(isLucky(digits));
}

