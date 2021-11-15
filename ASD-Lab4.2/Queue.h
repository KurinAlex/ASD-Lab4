#pragma once

template <typename T>
struct Queue
{
public:
	Queue(unsigned int max_size)
	{
		this->max_size = max_size;
		this->array = new T[max_size];
		this->tail_index = -1;
		this->head_index = 0;
		this->count = 0;
	}

	void push(T element)
	{
		if (size() == max_size)
		{
			std::cout << "Warning: Can't add an element - queue is overflown\n";
			return;
		}

		tail_index = (tail_index + 1) % max_size;
		array[tail_index] = element;
		count++;
	}

	T pop()
	{
		if (empty())
		{
			throw std::exception("Warning: Can't pop an element - queue is empty");
		}

		T tmp = array[head_index];
		head_index = (head_index + 1) % max_size;
		count--;
		return tmp;
	}

	T front()
	{
		if (empty())
		{
			throw std::exception("Warning: Can't get a top element - queue is empty");
		}

		return array[head_index];
	}

	bool empty()
	{
		return count == 0;;
	}

	unsigned int size()
	{
		return count;
	}

	static void print(Queue queue, void (*print_element)(T element))
	{
		if (queue.empty())
		{
			std::cout << "Queue is empty\n";
			return;
		}

		std::cout << "Queue of count " << queue.size() << ":\n\n";
		do
		{
			print_element(queue.pop());
			std::cout << "\n";
		} while (!queue.empty());
	}

private:
	unsigned int max_size;
	T* array;
	unsigned int head_index;
	unsigned int tail_index;
	unsigned int count;
};