#include <ctime>

#include "BilliardBall.h"
#include "Stack.h"

#define N 4

int main()
{
	srand(time(NULL));

	std::cout << "Pocket created:\n\n";
	Stack<BilliardBall> stack(N);
	PrintStack(stack, PrintBilliardBall);

	std::cout << "\nScored three balls:\n\n";
	for (int i = 0; i < 3; i++)
	{
		stack.push(GenerateBilliardBall());
	}
	PrintStack(stack, PrintBilliardBall);

	std::cout << "\nPoped one ball:\n\n";
	stack.pop();
	PrintStack(stack, PrintBilliardBall);

	std::cout << "\nScored three more balls:\n\n";
	for (int i = 0; i < 3; i++)
	{
		stack.push(GenerateBilliardBall());
	}
	PrintStack(stack, PrintBilliardBall);

	std::cout << "\nPoped two balls and returned one with bigger number:\n\n";
	BilliardBall ball1 = stack.pop();
	BilliardBall ball2 = stack.pop();
	stack.push((ball1.number > ball2.number) ? ball1 : ball2);
	PrintStack(stack, PrintBilliardBall);

	std::cout << "\nPoped 5 balls:\n\n";
	for (int i = 0; i < 5; i++)
	{
		try
		{
			stack.pop();
		}
		catch (...) {}
	}
	PrintStack(stack, PrintBilliardBall);

	std::cin.get();
	return 0;
}