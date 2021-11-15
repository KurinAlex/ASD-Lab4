#pragma once
#include <iostream>
#include <cstring>

struct BilliardBall
{
	std::string color;
	std::string color_type;
	unsigned int number;
};

BilliardBall GenerateBilliardBall();
void PrintBilliardBall(BilliardBall billiard_ball);