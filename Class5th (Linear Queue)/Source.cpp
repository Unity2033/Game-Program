#include <iostream>

using namespace std;

#define SIZE 5

#pragma region 선형 큐
// 배열의 공간에 들어간 데이터가 고정되어
// 데이터를 빼내더라도 초기화하지 않으며,
// 원래 데이터가 있던 배열의 자리에 더 이상 다른 값이
// 들어올 수 없는 Queue입니다.

template<typename T>
class LinearQueue
{
private:
	int front;
	int rear;
	int size;

	T buffer[SIZE];

public:

	LinearQueue()
	{
		for (int i = 0; i < SIZE; i++)
		{
			buffer[i] = NULL;
		}

		front = 0;
		rear = 0;
		size = 0;
	}

	void Push(T data)
	{
		if (IsFull())
		{
			cout << "Queue is Full" << endl;
		}
		else
		{
			buffer[rear++] = data;

			size++;
		}
	}

	void Pop()
	{
		if (Empty())
		{
			cout << "Queue is Empty" << endl;
		}
		else
		{
			buffer[front++] = NULL;

			size--;
		}

	}

	bool IsFull()
	{
		if (SIZE <= rear)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool Empty()
	{
		if (front == rear)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	int& Size()
	{
		return size;
	}

	T& Front()
	{
		if (Empty())
		{
			exit(1);
		}
		else
		{
			return buffer[front];
		}
	}
};


#pragma endregion


int main()
{
	LinearQueue<int> linearQueue;

	linearQueue.Push(10);
	linearQueue.Push(20);
	linearQueue.Push(30);
	linearQueue.Push(40);
	linearQueue.Push(50);

	while (linearQueue.Empty() == false)
	{
		cout << linearQueue.Front() << endl;

		linearQueue.Pop();
	}

	return 0;
}
