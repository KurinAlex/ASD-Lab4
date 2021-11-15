#include "BilliardBall.h"

std::string colors[] = { "Blue", "Red", "Yellow", "Green" };

std::string color_types[] = { "Solid", "Striped" };

BilliardBall GenerateBilliardBall()
{
	return { colors[rand() % 4],color_types[rand() % 2],(unsigned int)rand() % 15 + 1 };
}

void PrintBilliardBall(BilliardBall billiard_ball)
{
	std::cout << ">> Color: " << billiard_ball.color <<
		"\n>> Color type: " << billiard_ball.color_type <<
		"\n>> Number: " << billiard_ball.number << "\n";
}