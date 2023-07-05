#pragma once
#pragma once
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>

// STL <array 라이브러리>
#include <array>

// STL <vector 라이브러리>
#include <vector>

// STL <deque 라이브러리>
#include <deque>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

using namespace std;

// 생명력
int life = 5;

void Keyboard(char key, std::vector<const char*>& container)
{

	key = _getch();

	if (key == -32)
	{
		key = _getch();
	}

	switch (key)
	{
	case UP:
		if (container.back() == "↑")
		{
			container.pop_back();
		}
		else
		{
			life--;
		}
		break;
	case LEFT:
		if (container.back() == "←")
		{
			container.pop_back();
		}
		else
		{
			life--;
		}
		break;
	case RIGHT:
		if (container.back() == "→")
		{
			container.pop_back();
		}
		else
		{
			life--;
		}
		break;
	case DOWN:
		if (container.back() == "↓")
		{
			container.pop_back();
		}
		else
		{
			life--;
		}
		break;
	default:
		break;
	}
}


int main()
{
#pragma region STL 표준 템플릿 라이브러리
	// C++에서 사용할 수 있는 컨테이너 class와 알고리즘을
	// 일반화 시켜서 사용할 수 있는 자료구조를 포함하는 라이브러리입니다.

	// std::array
	/*
	std::array<int, 5> STLarray {1,2,3,4,5};

	STLarray[0] = 10;
	std::cout << "STLarray의 크기 : " << STLarray.size() << std::endl;
	*/

	// std::vector
	/*
	std::vector<int> vector;
	vector.push_back(10);
	vector.push_back(20);
	vector.push_back(30);
	vector.push_back(40);
	vector.push_back(50);
	vector.push_back(60);
	vector.push_back(70);

	vector.pop_back();
	vector.pop_back();
	vector.pop_back();
	vector.pop_back();
	vector.pop_back();

	std::cout << "capacity = "  << vector.capacity() << std::endl;

	for (int i = 0; i < vector.size(); i++)
	{
		std::cout << vector[i] << std::endl;
	}
	*/

	// std::deque
	/*
	std::deque<int> deque;

	deque.push_back(10);
	deque.push_front(20);

	deque.pop_front();
	deque.pop_back();

	// empty() : 컨테이너가 비어있는 지 확인하는 함수
	// 비어있다면 (true) 1을 반환합니다.
	// 비어 있지 않으면 (false) 0을 반환합니다.
	std::cout << deque.empty() << std::endl;

	for (int i = 0; i < deque.size(); i++)
	{
		std::cout << deque[i] << std::endl;
	}
	*/

	// 리듬 게임	
	/*
	// ↑,← 를 담을 수 있는 컨테이너
	std::vector<const char*> container;

	// key 입력 변수
	char key = 0;

	// 생성될 오브젝트의 수
	int spawnCount = 5;

	// 랜덤으로 설정될 변수
	int random = 0;

	srand(time(NULL));

	for (int i = 0; i < spawnCount; i++)
	{
		random = rand() % 4 + 1;

		switch (random)
		{
		case 1 : container.push_back("↑");
			break;
		case 2 : container.push_back("←");
			break;
		case 3 : container.push_back("→");
			break;
		case 4 :  container.push_back("↓");
			break;
		}
	}

	while (true)
	{
		if (life <= 0)
		{
			std::cout << "게임에서 패배했습니다." << std::endl;
			break;
		}

		std::cout << "현재 나의 목숨 : " << life << std::endl;


		for (int i = 0; i < container.size(); i++)
		{
			std::cout << container[i] << " ";
		}

		Keyboard(key, container);

		system("cls");

		if (container.size() == 0)
		{
			std::cout << "화살표를 다 맞추었습니다." << std::endl;
			break;
		}
	}
	*/
#pragma endregion


	return 0;
}
