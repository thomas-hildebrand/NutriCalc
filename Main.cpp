#include <iostream>
#include <string>
#include "Log.h"
#include "Screen.h"
#include "Food.h"

int main()
{
	const std::string FOOD_MENU_OPTION = "1";
	const std::string MEAL_MENU_OPTION = "2";
	const std::string EXIT_PROGRAM = "0";

	bool programShouldContinue = true;
	bool invalidUserInput = false;

	std::string userResponse = "";
	
	while (programShouldContinue) {

		system("CLS");
		DisplayHeader();
		DisplayMainMenu();
		if (invalidUserInput)
		{
			DisplayInvalidInputErrorMsg(userResponse);
			invalidUserInput = false;
		}
		
		std::cout << "Please enter a valid option from the menu above: ";
		std::getline(std::cin, userResponse);

		if (userResponse == FOOD_MENU_OPTION)
		{
			FoodMenuScreen();
		}
		else if (userResponse == MEAL_MENU_OPTION)
		{
			std::cout << "MEAL_MENU_OPTION selected" << std::endl;
		}
		else if (userResponse == EXIT_PROGRAM)
		{
			TextColor(TEXT_COLOR_RED);
			std::cout << "Are you sure you want to exit the program?\nEnter y to exit: ";
			TextColor(TEXT_COLOR_WHITE);

			std::getline(std::cin, userResponse);
			if(userResponse == "y" || userResponse == "Y") programShouldContinue = false;
		}
		else
		{
			invalidUserInput = true;
		}

		system("PAUSE");
	}
	


}