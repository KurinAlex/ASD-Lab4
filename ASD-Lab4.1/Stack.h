#pragma once
#include <iostream>

template<typename T>
struct Stack
{
public:
	Stack(unsigned int max_size)
	{
		this->max_size = max_size;
		this->array = new T[max_size];
		this->current_size = 0;
	}

	void push(T element)
	{
		if (current_size == max_size)
		{
			throw std::exception("Warning: Can't add an element - stack is overflown");
		}

		array[current_size] = element;
		current_size++;
	}

	T pop()
	{
		if (empty())
		{
			throw std::exception("Warning: Can't pop an element - stack is empty");
		}

		current_size--;
		return array[current_size];
	}

	T top()
	{
		if (empty())
		{
			throw std::exception("Warning: Can't get a top element - stack is empty");
		}

		return array[current_size - 1];
	}

	bool empty()
	{
		return current_size == 0;
	}

	unsigned int size()
	{
		return current_size;
	}

	void print(void (*print_element)(T element))
	{
		Stack stack = *this;

		if (stack.empty())
		{
			std::cout << "Stack is empty\n";
			return;
		}

		std::cout << "Stack of size " << stack.size() << ":\n\n";
		do
		{
			print_element(stack.pop());
			std::cout << "\n";
		} while (!stack.empty());
	}

private:
	unsigned int max_size;
	T* array;
	unsigned int current_size;
};