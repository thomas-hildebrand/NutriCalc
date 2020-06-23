#include <iostream>
#include <string>
#include "Log.h"
#include "Food.h"
#include "Screen.h"

void FoodMenuScreen()
{
	const std::string MAIN_MENU_OPTION = "0";
	const std::string VIEW_FOOD_OPTION = "1";
	const std::string VIEW_ALL_FOOD_OPTION = "2";
	const std::string CREATE_FOOD_OPTION = "3";

	bool screenShouldContinue = true;
	bool invalidUserInput = false;

	std::string response = "";

	while (screenShouldContinue) {

		system("CLS");
		DisplayHeader();
		DisplayFoodMenu();
		if (invalidUserInput)
		{
			DisplayInvalidInputErrorMsg(response);
			invalidUserInput = false;
		}

		std::cout << "Please enter a valid option from the menu above: ";
		std::getline(std::cin, response);

		if (response == VIEW_FOOD_OPTION)
		{
			std::cout << "VIEW_FOOD_OPTION selected" << std::endl;
		}
		else if (response == VIEW_ALL_FOOD_OPTION)
		{
			std::cout << "VIEW_ALL_FOOD_OPTION selected" << std::endl;
		}
		else if (response == CREATE_FOOD_OPTION)
		{
			FoodCreationScreen();
		}
		else if (response == MAIN_MENU_OPTION)
		{
			screenShouldContinue = false;
		}
		else
		{
			invalidUserInput = true;
		}

		system("PAUSE");
	}
}

void FoodCreationScreen() 
{
	system("CLS");
	DisplayHeader();
	DisplayFoodCreation();
	Food();
}