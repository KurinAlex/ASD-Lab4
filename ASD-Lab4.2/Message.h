#pragma once
#include <iostream>
#include <cstring>

struct Message
{
	std::string text;
	unsigned int sender_id;
	unsigned int emoticons_number;
};

Message GenerateMessage();
void PrintMessage(Message message);