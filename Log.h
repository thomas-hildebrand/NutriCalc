#pragma once

const int TEXT_COLOR_BLUE = 1;
const int TEXT_COLOR_CYAN = 3;
const int TEXT_COLOR_RED = 4;
const int TEXT_COLOR_WHITE = 7;


void TextColor(int color);
void DisplayHeader();
void DisplayMainMenu();
void DisplayFoodMenu();
void DisplayFoodCreation();
void DisplayInvalidInputErrorMsg(std::string input);