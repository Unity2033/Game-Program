#include <iostream>

using namespace std;

#define SIZE 4

#pragma region 원형 큐
// 물리적으로는 선형 구조를 가지고 있으며,
// 큐의 시작점과 끝점을 연결한 Queue입니다.

template<typename T>
class CircleQueue
{
private:
	int front;
	int rear;

	T buffer[SIZE];

public:
	CircleQueue()
	{
		front = SIZE - 1;
		rear = SIZE - 1;

		for (int i = 0; i < SIZE; i++)
		{
			buffer[i] = NULL;
		}
	}

	void Push(T data)
	{
		if (IsFull())
		{
			cout << "Queue is Full" << endl;
		}
		else
		{
			rear = (rear + 1) % SIZE;
			buffer[rear] = data;
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
			front = (front + 1) % SIZE;
			buffer[front] = NULL;
		}
	}

	bool IsFull()
	{
		if (front == (rear + 1) % SIZE)
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

	T& Front()
	{
		return buffer[(front + 1) % SIZE];
	}

};


#pragma endregion


int main()
{
	CircleQueue<char> circleQueue;

	circleQueue.Push('A');
	circleQueue.Push('B');
	circleQueue.Push('C');

	while (circleQueue.Empty() == false)
	{
		cout << circleQueue.Front() << endl;
		circleQueue.Pop();
	}

	circleQueue.Push('D');
	circleQueue.Push('E');
	circleQueue.Push('F');

	while (circleQueue.Empty() == false)
	{
		cout << circleQueue.Front() << endl;
		circleQueue.Pop();
	}

	return 0;
}
