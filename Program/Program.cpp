#include <iostream>

using namespace std;

template <typename T>
class DoubleLinkedList
{
private:
	struct Node
	{
		T data;
		Node * next;
		Node * prev;
	};

	int size;
	Node * head;
	Node * tail;

public:

	DoubleLinkedList()
	{
		size = 0;
		head = nullptr;
		tail = nullptr;
	}

	void PushFront(T data)
	{
		Node * newNode = new Node;
	
		newNode->data = data;

		newNode->next = nullptr;

		newNode->prev = nullptr;

		if (head == nullptr)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			newNode->next = head;

			head->prev = newNode;

			head = newNode;
		}

		size++;
	}

	void PushBack(T data)
	{
		Node * newNode = new Node;

		newNode->data = data;

		newNode->next = nullptr;

		newNode->prev = nullptr;

		if (head == nullptr)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			newNode->prev = tail;

			tail->next = newNode;

			tail = newNode;
		}

		size++;
	}

};

int main()
{


	return 0;
}
