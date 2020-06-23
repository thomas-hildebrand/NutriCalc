#include <iostream>
#include <string>
#include <Windows.h>
#include "Log.h"

void TextColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void DisplayHeader()
{
	std::string header = "NutriCalc";
	int numSpaces = HEADER_WIDTH - header.length() - 2;

	for (int i = 0; i < HEADER_WIDTH; i++)
	{
		std::cout << "*";
	}
	std::cout << "\n*";

	for (int i = 0; i < numSpaces / 2; i++)
	{
		std::cout << " ";
	}

	numSpaces = numSpaces % 2 == 0 ? numSpaces /= 2 : numSpaces = numSpaces / 2 + 1;

	std::cout << header;

	for (int i = 0; i < numSpaces; i++)
	{
		std::cout << " ";
	}

	std::cout << "*" << std::endl;
	
	for (int i = 0; i < HEADER_WIDTH; i++)
	{
		std::cout << "*";
	}
	std::cout << std::endl;
}

void DisplayMainMenu()
{
	std::cout << "                                          * Main Menu *" << std::endl;
	std::cout << "                                          *************" << std::endl;
	std::cout << "1. Open Food Menu" << std::endl;
	std::cout << "2. Open Meal Menu (TODO)" << std::endl;
	std::cout << "0. Exit Program" << std::endl;
}

void DisplayFoodMenu()
{
	std::cout << "                                          * Food Menu *" << std::endl;
	std::cout << "                                          *************" << std::endl;
	std::cout << "1. View Food (TODO)" << std::endl;
	std::cout << "2. View All Foods (TODO)" << std::endl;
	std::cout << "3. Create New Food" << std::endl;
	std::cout << "0. Return to Main Menu (TODO)" << std::endl;
}

void DisplayFoodCreation()
{
	std::cout << "                                       * Create New Food *" << std::endl;
	std::cout << "                                       *******************" << std::endl;
	TextColor(TEXT_COLOR_CYAN);
	std::cout << "Type 'quit' at any time to exit food creation." << std::endl;
	TextColor(TEXT_COLOR_WHITE);
}

void DisplayFoodCreation(std::string foodName)
{
	std::cout << "                                       * " << foodName << " *" << std::endl;
	std::cout << "                                       *******************" << std::endl;
	TextColor(TEXT_COLOR_CYAN);
	std::cout << "Type 'quit' at any time to exit food creation." << std::endl;
	TextColor(TEXT_COLOR_WHITE);
}

void DisplayInvalidInputErrorMsg(std::string input)
{
	TextColor(TEXT_COLOR_RED);
	std::cout << "INVALID INPUT!!!: " << input << std::endl;
	TextColor(TEXT_COLOR_WHITE);
}
