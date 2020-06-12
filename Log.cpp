#include <iostream>
#include <string>
#include <Windows.h>

void TextColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void DisplayHeader()
{
	std::cout << "******************************************************" << std::endl;
	std::cout << "                    NutriCalc" << std::endl;
	std::cout << "******************************************************" << std::endl;

}

void DisplayMainMenu()
{
	std::cout << "                 * Main Menu *" << std::endl;
	std::cout << "                 *************" << std::endl;
	std::cout << "1. Open Food Menu" << std::endl;
	std::cout << "0. Exit Program" << std::endl;
}

void DisplayFoodMenu()
{
	std::cout << "                 * Food Menu *" << std::endl;
	std::cout << "                 *************" << std::endl;
	std::cout << "1. View Food(TODO)" << std::endl;
	std::cout << "2. View All Foods(TODO)" << std::endl;
	std::cout << "3. Create Food(TODO)" << std::endl;
	std::cout << "0. Return to Main Menu(TODO)" << std::endl;
}

void DisplayInvalidInputErrorMsg(std::string input)
{
	TextColor(4);
	std::cout << "INVALID INPUT!!!: " << input << std::endl;
	TextColor(7);
}
