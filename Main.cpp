#include <iostream>
#include <string>
#include "Log.h"
#include "Screen.h"

int main()
{
	const std::string FOOD_MENU_OPTION = "1";
	const std::string EXIT_PROGRAM = "0";

	bool programShouldContinue = true;
	bool invalidUserInput = false;

	std::string response = "";
	
	while (programShouldContinue) {

		system("CLS");
		DisplayHeader();
		DisplayMainMenu();
		if (invalidUserInput)
		{
			DisplayInvalidInputErrorMsg(response);
			invalidUserInput = false;
		}
		
		std::cout << "Please enter a valid option from the menu above: ";
		std::getline(std::cin, response);

		if (response == FOOD_MENU_OPTION)
		{
			FoodMenu();
		}
		else if (response == EXIT_PROGRAM)
		{
			programShouldContinue = false;
		}
		else
		{
			invalidUserInput = true;
		}

		system("PAUSE");
	}
	


}