#include <iostream>
#include <string>
#include "Food.h"

bool Food::isFloat(std::string input)
{
	bool foundDecimal = false;
	bool foundNumeral = false;

	for (int i = 0; i < input.length(); i++)
	{
		char c = input[i];
		if (c == '.')
		{
			if (foundDecimal == true) {
				return false;
			}
			foundDecimal = true;
			continue;
		}

		if (c < '0' || c > '9') return false;
		foundNumeral = true;
	}

	return foundNumeral;
}

float Food::verifyFloat(std::string input)
{

    while (!isFloat(input))
    {
		DisplayInvalidInputErrorMsg(input);
		std::cout << "Please enter a valid decimal number. (No spaces)" << std::endl;
		std::getline(std::cin, input);
    }

	return stof(input);
}
