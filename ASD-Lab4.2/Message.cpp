#include "Message.h"

std::string texts[] = { "Hello", "Hi", "How are you?", "Wow", "Incredible", "What?",
"This is sad", "Dissapointing", "See you soon", "Bye" };

Message GenerateMessage()
{
	return { texts[rand() % 10],(unsigned int)rand() % 20 + 1,(unsigned int)rand() % 5 + 1 };
}

void PrintMessage(Message message)
{
	std::cout << ">> Text: " << message.text <<
		"\n>> Sender id: " << message.sender_id <<
		"\n>> Emoticons number: " << message.emoticons_number << "\n";
}