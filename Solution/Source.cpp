#pragma once
#include <iostream>

// STL <queue 라이브러리>
#include <queue>

// STL <stack 라이브러리>
#include <stack>

// STL <vector 라이브러리>
#include <vector>

using namespace std;

int main()
{

#pragma region 컨테이너 어댑터
	// 기존 컨테이너의 인터페이스를 제한하여 만든 기능이
	// 제한되거나 변형된 컨테이너입니다.

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

	// 컨테이너에 데이터가 없을 시 pop()을 시도하면
	// 런타임 에러가 발생합니다.
	// queue.pop();
	*/

	// std::swap
	/*
	int a = 10;
	int b = 20;

	std::swap(a, b);

	std::cout << "a의 값 : " << a << std::endl;
	std::cout << "b의 값 : " << b << std::endl;
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

	// std::iterator 반복자 
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

	// iter가 가리키는 값을 출력해주세요.
	// std::cout << "iter가 가리키는 값 : " << *iter << std::endl;
	*/
#pragma endregion


	return 0;
}
