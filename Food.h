#pragma once
#include <iostream>
#include <vector>

class Food
{
private:
	std::string name;
	std::vector<float> nutrients;

public:
	Food(std::string foodName) {
		name = foodName;
		std::cout << name << " has been created. " << std::endl;
	}
};
