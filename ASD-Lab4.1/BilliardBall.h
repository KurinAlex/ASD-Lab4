#pragma once
#include <iostream>
#include <cstring>
#include <cstdlib>

struct BilliardBall
{
	std::string color;
	std::string color_type;
	unsigned int number;
};

BilliardBall GenerateBilliardBall();
void PrintBilliardBall(BilliardBall billiard_ball);