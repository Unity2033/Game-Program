#pragma once
#include <iostream>
#include <vector>
#include <deque>
#include <time.h>
#include <conio.h>
#include <windows.h>

using namespace std;

#pragma region 선형 컨테이너
// 데이터를 선형으로 저장하며, 특별한 제약이나
// 규칙이 없는 일반적인 컨테이너입니다.

#pragma endregion

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

int createCount;

void GotoXY(int x, int y)
{
	// x, y 좌표 설정
	COORD position = { x, y };

	// 커서 이동
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

int main()
{
#pragma region Vector 컨테이너
	//std::vector<int> vector;

	//// push_back() : 뒤 쪽에 데이터를 저장하는 함수
	////  0	 1	  2
	//// [10]	[20] [30]
	//vector.push_back(10);
	//vector.push_back(20);
	//vector.push_back(30);

	//cout << "vector.size : " << vector.size() << endl;
	//cout << "capacity : " << vector.capacity() << endl;
 //
	//for (int i = 0; i < vector.size(); i++)
	//{
	//	cout << vector[i] << endl;
	//}

	//vector.push_back(40);
	//vector.push_back(50);

	////  0	 1	  2	   3
 //   // [10]	[20] [30] [40]
	//vector.pop_back();

	//cout << "vector.size : " << vector.size() << endl;
	//cout << "capacity : " << vector.capacity() << endl;

	//for (int i = 0; i < vector.size(); i++)
	//{
	//	cout << vector[i] << endl;
	//}
#pragma endregion

#pragma region 리듬 게임
	//srand(time(NULL));

	//std::vector<const char*> note;
	//createCount = 5;

	//for (int i = 0; i < createCount; i++)
	//{
	//	int random = rand() % 4;

	//	switch (random)
	//	{
	//		case 0: note.push_back("↑");
	//			break; 
	//		case 1: note.push_back("←");
	//			break;
	//		case 2: note.push_back("→");
	//			break;
	//		case 3: note.push_back("↓");
	//			break;
	//	}
	//}

	//char key = 0;
	//
	//// note 비어있다.  note.empty() -> 0  

	//while (note.empty() == false)
	//{
	//	for (int i = 0; i < note.size(); i++)
	//	{
	//		cout << note[i] << " ";
	//	}

	//	key = _getch();

	//	if (key == -32)
	//	{
	//		key = _getch();
	//	}

	//	switch (key)
	//	{
	//	case UP : if (note[note.size() - 1] == "↑")
	//		{
	//			note.pop_back();
	//		}
	//		break;
	//	case LEFT : if (note[note.size() - 1] == "←")
	//		{
	//			note.pop_back();
	//		}
	//		break;
	//	case RIGHT : if (note[note.size() - 1] == "→")
	//		{
	//			note.pop_back();
	//		}
	//		break;
	//	case DOWN : if (note[note.size() - 1] == "↓")
	//		{
	//			note.pop_back();
	//		}
	//		break;
	//	}

	//	system("cls");	
	//}

#pragma endregion

#pragma region deque 컨테이너

	// Deque 선언
	std::deque<int> deque;

	deque.push_back(10);
	deque.push_back(20);
	deque.push_front(99);

	for (int i = 0; i < deque.size(); i++)
	{
		cout << deque[i] << endl;
	}

#pragma endregion

	return 0;
}