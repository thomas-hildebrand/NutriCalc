#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Log.h"

class Food
{
private:

	const int CALORIES_INDEX = 0;
	const int CARBOHYDRATES_INDEX = 1;
	const int FAT_INDEX = 2;
	const int PROTEIN_INDEX = 3;
	const int FIBER_INDEX = 4;
	const int OMEGA_THREE_INDEX = 5;
	const int OMEGA_SIX_INDEX = 6;
	const int OMEGA_NINE_INDEX = 7;
	const int TRYPTOPHAN_INDEX = 8;
	const int CYSTINE_INDEX = 9;
	const int VITAMIN_A_INDEX = 10;
	const int ALPHA_CAROTENE_INDEX = 11;
	const int BETA_CAROTENE_INDEX = 12;
	const int BETA_CRYPTOXANTHIN_INDEX = 13;
	const int LYCOPENE_INDEX = 14;
	const int LUTEIN_ZEAXANTHIN_INDEX = 15;
	const int VITAMIN_C_INDEX = 16;
	const int VITAMIN_D_INDEX = 17;
	const int VITAMIN_E_INDEX = 18;
	const int THIAMIN_INDEX = 19;
	const int RIBOFLAVIN_INDEX = 20;
	const int NIACIN_INDEX = 21;
	const int VITAMIN_B6_INDEX = 22;
	const int FOLATE_INDEX = 23;
	const int VITAMIN_B12_INDEX = 24;
	const int PANTOTHENIC_ACID_INDEX = 25;
	const int CHOLINE_INDEX = 26;
	const int CALCIUM_INDEX = 27;
	const int IRON_INDEX = 28;
	const int MAGNESIUM_INDEX = 29;
	const int POTASSIUM_INDEX = 30;
	const int SODIUM_INDEX = 31;
	const int ZINC_INDEX = 32;
	const int COPPER_INDEX = 33;
	const int MANGANESE_INDEX = 34;
	const int SELENIUM_INDEX = 35;
	const int BIOTIN_INDEX = 36;
	const int CHROMIUM_INDEX = 37;
	const int IODINE_INDEX = 38;
	const int NUMBER_OF_NUTRIENTS = 39;

	std::string name;
	std::vector<std::pair <std::string, float>> nutrients = {
		std::make_pair("Calories", 0.0),
		std::make_pair("Carbohydrates", 0.0),
		std::make_pair("Fat", 0.0),
		std::make_pair("Protein", 0.0),
		std::make_pair("Fiber", 0.0),
		std::make_pair("Omega – 3", 0.0),
		std::make_pair("Omega – 6", 0.0),
		std::make_pair("Tryptophan", 0.0),
		std::make_pair("Cystine", 0.0),
		std::make_pair("Vitamin A", 0.0),
		std::make_pair("Alpha Carotene", 0.0),
		std::make_pair("Beta Carotene", 0.0),
		std::make_pair("Beta Cryptoxanthin", 0.0),
		std::make_pair("Lycopene", 0.0),
		std::make_pair("Lutein + Zeaxanthin", 0.0),
		std::make_pair("Vitamin C", 0.0),
		std::make_pair("Vitamin D", 0.0),
		std::make_pair("Vitamin E", 0.0),
		std::make_pair("Thiamin", 0.0),
		std::make_pair("Riboflavin", 0.0),
		std::make_pair("Niacin", 0.0),
		std::make_pair("Vitamin B6", 0.0),
		std::make_pair("Folate", 0.0),
		std::make_pair("Vitamin B12", 0.0),
		std::make_pair("Pantothenic Acid", 0.0),
		std::make_pair("Choline", 0.0),
		std::make_pair("Calcium", 0.0),
		std::make_pair("Iron", 0.0),
		std::make_pair("Magnesium", 0.0),
		std::make_pair("Potassium", 0.0),
		std::make_pair("Sodium", 0.0),
		std::make_pair("Zinc", 0.0),
		std::make_pair("Copper", 0.0),
		std::make_pair("Manganese", 0.0),
		std::make_pair("Selenium", 0.0),
		std::make_pair("Biotin", 0.0),
		std::make_pair("Chromium", 0.0),
		std::make_pair("Iodine", 0.0)
	};
	bool isFloat(std::string input);
	float verifyFloat(std::string input);

public:
	Food() {
		std::string response = "";

		std::cout << "Food Name: ";
		std::getline(std::cin, response);
		name = response;
		
		system("CLS");
		DisplayHeader();
		DisplayFoodCreation(name);

		std::cout << "Measurement in Grams: ";
		std::getline(std::cin, response);
		float grams = verifyFloat(response);
		while (grams == 0)
		{
			std::cout << "Measurement cannot be zero.  Please re-enter measurement in Grams: ";
			std::getline(std::cin, response);
			grams = verifyFloat(response);
		}
		
		for (int i = 0; i < nutrients.size(); i++)
		{
			std::cout << nutrients[i].first << ": ";
			std::getline(std::cin, response);
			nutrients[i].second = verifyFloat(response);
		}

		std::cout << name << " has been sucessfully created!" << std::endl;
	}

	
};