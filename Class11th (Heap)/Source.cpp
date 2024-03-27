#include <iostream>

#define SIZE 8

using namespace std;

template <typename T>
class Heap
{
private:
	T buffer[SIZE];
	int index;

public:
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

	T& Delete()
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
		buffer[index] = NULL;

		// 5. index의 값을 감소합니다.
		index--;

		int parent = 1;

		while (parent * 2 <= index)
		{
			int child = parent * 2;

			// 오른쪽 자식의 노드가 클 때
			if (buffer[child] < buffer[child + 1])
			{
				child++;
			}

			// 부모 노드의 key 값이 자식 노드의 key 값보다 크다면
			// 반복을 종료합니다.
			if (buffer[child] < buffer[parent])
			{
				break;
			}

			swap(buffer[parent], buffer[child]);
			parent = child;
		}

		return result;
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
	Heap<int> heap;

	heap.Insert(1);
	heap.Insert(2);
	heap.Insert(3);
	heap.Insert(4);
	heap.Insert(5);

	for (int i = 0; i < 5; i++)
	{
		heap.Show();

		cout << heap.Delete() << endl;
	}

	cout << heap.Delete() << endl;

	return 0;
}
