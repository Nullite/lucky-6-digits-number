#include <iostream>
#include "output.h"

void printResult(bool correctNum)
{
	if (correctNum)
	{
		std::cout << "This number is lucky!\n";
	}
	else
	{
		std::cout << "This number is not lucky.\n";
	}
}