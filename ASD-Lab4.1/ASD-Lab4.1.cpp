#include <ctime>

#include "BilliardBall.h"
#include "Stack.h"

#define N 4

int main()
{
	srand(time(NULL));

	std::cout << "Pocket created:\n\n";
	Stack<BilliardBall> stack(N);
	stack.print(PrintBilliardBall);

	std::cout << "\nScored three balls:\n\n";
	for (int i = 0; i < 3; i++)
	{
		stack.push(GenerateBilliardBall());
	}
	stack.print(PrintBilliardBall);

	std::cout << "\nPoped one ball:\n\n";
	stack.pop();
	stack.print(PrintBilliardBall);

	std::cout << "\nScored three more balls:\n\n";
	for (int i = 0; i < 3; i++)
	{
		try
		{
			stack.push(GenerateBilliardBall());
		}
		catch (std::exception ex)
		{
			std::cout << ex.what() << "\n";
		}
	}
	stack.print(PrintBilliardBall);

	std::cout << "\nPoped two balls and returned one with bigger number:\n\n";
	BilliardBall ball1 = stack.pop();
	BilliardBall ball2 = stack.pop();
	stack.push((ball1.number > ball2.number) ? ball1 : ball2);
	stack.print(PrintBilliardBall);

	std::cout << "\nPoped 5 balls:\n\n";
	for (int i = 0; i < 5; i++)
	{
		try
		{
			stack.pop();
		}
		catch (std::exception ex)
		{
			std::cout << ex.what() << "\n";
		}
	}
	stack.print(PrintBilliardBall);

	std::cin.get();
	return 0;
}