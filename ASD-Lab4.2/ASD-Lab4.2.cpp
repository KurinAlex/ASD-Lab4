#include <ctime>

#include "Message.h"
#include "Queue.h"

#define N 9

void PrintQueue(Queue<Message> queue)
{
	Queue<Message>::print(queue, PrintMessage);
}

int main()
{
	srand(time(NULL));

	std::cout << "Queue created:\n\n";
	Queue<Message> queue(N);
	PrintQueue(queue);

	std::cout << "\nSeven messages added:\n\n";
	for (int i = 0; i < 7; i++)
	{
		queue.push(GenerateMessage());
	}
	PrintQueue(queue);

	std::cout << "\Four more messages added:\n\n";
	for (int i = 0; i < 4; i++)
	{
		queue.push(GenerateMessage());
	}
	PrintQueue(queue);

	std::cout << "\nPoped six messages:\n\n";
	for (int i = 0; i < 6; i++)
	{
		queue.pop();
	}
	PrintQueue(queue);

	std::cout << "\nTwo messages poped, their numbers of emotions set to 0 and they are pushed back:\n\n";
	Message message1 = queue.pop();
	Message message2 = queue.pop();
	message1.emoticons_number = 0;
	message2.emoticons_number = 0;
	queue.push(message1);
	queue.push(message2);
	PrintQueue(queue);

	std::cout << "\nPoped six more messages:\n\n";
	for (int i = 0; i < 6; i++)
	{
		try
		{
			queue.pop();
		}
		catch (std::exception ex)
		{
			std::cout << ex.what() << "\n";
		}
	}
	PrintQueue(queue);

	std::cin.get();
	return 0;
}