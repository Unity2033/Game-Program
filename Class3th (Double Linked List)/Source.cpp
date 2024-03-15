#include <iostream>

using namespace std;

template <typename T>
class DoubleLinkedList
{
private:
	struct Node
	{
		T data;
		Node* next;
		Node* prev;
	};

	int size;
	Node* head;
	Node* tail;

public:

	DoubleLinkedList()
	{
		size = 0;
		head = nullptr;
		tail = nullptr;
	}

	void PushFront(T data)
	{
		Node* newNode = new Node;

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
		Node* newNode = new Node;

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

	void PopFront()
	{
		Node* deleteNode = head;

		if (size == 0)
		{
			cout << "List is Empty" << endl;
			return;
		}
		else if (size == 1)
		{
			head = nullptr;
			tail = nullptr;

			delete deleteNode;
		}
		else
		{
			head = head->next;

			head->prev = nullptr;

			delete deleteNode;
		}

		size--;

	}

	void PopBack()
	{
		Node* deleteNode = tail;

		if (size == 0)
		{
			cout << "List is Empty" << endl;
			return;
		}
		else if (size == 1)
		{
			head = nullptr;
			tail = nullptr;

			delete deleteNode;
		}
		else
		{
			tail = tail->prev;

			tail->next = nullptr;

			delete deleteNode;
		}

		size--;
	}

	void Insert(int position, T data)
	{
		if (size + 1 < position)
		{
			cout << "The Size is out of bounds" << endl;

			return;
		}

		if (position <= 1)
		{
			PushFront(data);

			return;
		}
		else if (position == size + 1)
		{
			PushBack(data);

			return;
		}
		else
		{
			Node* currentNode = head;

			for (int i = 1; i < position; i++)
			{
				currentNode = currentNode->next;
			}

			Node* newNode = new Node;

			newNode->data = data;

			newNode->next = currentNode;

			currentNode->prev->next = newNode;

			newNode->prev = currentNode->prev;

			currentNode->prev = newNode;

			size++;
		}
	}

	void Show()
	{
		Node* currentNode = head;

		while (currentNode != nullptr)
		{
			cout << currentNode->data << endl;
			currentNode = currentNode->next;
		}
	}

	~DoubleLinkedList()
	{
		while (size != 0)
		{
			PopFront();
		}
	}


};

int main()
{
	DoubleLinkedList<int> doubleLinkedList;

	// doubleLinkedList.PushFront(100); // 100
	// doubleLinkedList.PushFront(95);	 // 95 - 100
	// doubleLinkedList.PushBack(98);	 // 95 - 100 - 98
	// doubleLinkedList.PushBack(99);	 // 95 - 100 - 98 - 99

	doubleLinkedList.Insert(1, 97);  // 95 - 97 - 100 - 98 - 99
	doubleLinkedList.Insert(2, 98);  // 95 - 97 - 100 - 98 - 99
	doubleLinkedList.Insert(3, 99);  // 95 - 97 - 100 - 98 - 99


	// doubleLinkedList.Show();

	return 0;
}
