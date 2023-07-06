#pragma once
#pragma once
#include <iostream>

// STL <queue ���̺귯��>
#include <queue>

// STL <stack ���̺귯��>
#include <stack>

// STL <vector ���̺귯��>
#include <vector>

using namespace std;

int main()
{
#pragma region ���ڿ� Ŭ���� (std::string)
	std::string string("���ڿ�");
	std::string name;

#pragma region �����̳� ������
	// ���� �����̳��� �������̽��� �����Ͽ� ���� ������
	// ���ѵǰų� ������ �����̳��Դϴ�.

	// std::queue
	/*
	std::queue<int>	queue;

	queue.push(10);
	queue.push(20);
	queue.push(30);
	queue.push(40);
	queue.push(50);

	// queue.pop();

	while (queue.empty() == false)
	{
		std::cout << queue.front() << std::endl;
		queue.pop();
	}

	// �����̳ʿ� �����Ͱ� ���� �� pop()�� �õ��ϸ�
	// ��Ÿ�� ������ �߻��մϴ�.
	// queue.pop();
	*/

	// std::swap
	/*
	int a = 10;
	int b = 20;

	std::swap(a, b);

	std::cout << "a�� �� : " << a << std::endl;
	std::cout << "b�� �� : " << b << std::endl;
	*/

	// std::stack
	/*
	std::stack<int> stack;

	stack.push(10);
	stack.push(20);
	stack.push(30);
	stack.push(40);
	stack.push(50);

	while (stack.size() != 0)
	{
		std::cout << stack.top() << std::endl;
		stack.pop();
	}
	*/

	// std::iterator �ݺ���
	/*
	std::vector<int> vector;

	vector.push_back(10); // 10
	vector.push_back(20); // 10 20
	vector.push_back(30); // 10 20 30

	std::vector<int>::iterator iter;

	vector.insert(vector.begin() + 1, 999);

	vector.erase(vector.begin() + 3);

	for (iter = vector.begin(); iter != vector.end(); iter++)
	{
		std::cout << *iter << std::endl;
	}

	// iter�� ����Ű�� ���� �������ּ���.
	// std::cout << "iter�� ����Ű�� �� : " << *iter << std::endl;
	*/
#pragma endregion


	return 0;
}
