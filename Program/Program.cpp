#include <iostream>

#define SIZE 8

using namespace std;

template <typename T>
class Heap
{
private :
	T buffer[SIZE];
	int index;

public :
	Heap()
	{
		for (int i = 0; i < SIZE; i++)
		{
			buffer[i] = NULL;
		}

		index = 0;
	}

	void Insert(T data)
	{
		if (index >= SIZE - 1)
		{
			cout << "Heap is Full" << endl;
			return;
		}

		buffer[++index] = data;

		int child = index;
		int parent = index / 2;

		while (child > 1)
		{
			// 자식 노드와 부모 노드의 데이터를 비교합니다.
			if (buffer[parent] < buffer[child])
			{
				swap(buffer[parent], buffer[child]);
			}

			child = parent;
			parent = child / 2;
		}
	}

	T & Delete()
	{
		// 1. Heap이 비어있다면 프로그램을 종료합니다.
		if (index <= 0)
		{
			cout << "Heap is Empty" << endl;
			exit(1);
		}

		// 2. 임시 변수에 buffer[1] 값을 보관합니다.
		T result = buffer[1];

		// 3. index로 가리키는 배열의 값을 첫 번째 원소에 넣어줍니다.
		buffer[1] = buffer[index];

		// 4. index로 가리키는 배열의 값을 초기화합니다.
		buffer[index] = NULL:

		// 5. index의 값을 감소합니다.
		index--;

	}

	void Show()
	{
		for (T element : buffer)
		{
			cout << element << " ";
		}
	}
};

int main()
{

	return 0;
}
