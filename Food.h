#pragma once
#include <iostream>
#include <vector>

class Food
{
private:
	std::string name;
	std::vector<float> nutrients;

public:
	Food() {
		std::string response = "";

		std::cout << "Food Name: ";
		std::getline(std::cin, response);
		
		std::cout << 
	}
};
