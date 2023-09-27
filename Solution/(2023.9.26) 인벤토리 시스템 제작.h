#pragma once
#include <iostream>
#include "Inventory.h"
#include "InputKey.h"

using namespace std;

void GotoXY(int x, int y)
{
	// x, y 좌표 설정
	COORD position = { x, y };

	// 커서 이동
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

int main()
{
	Inventory inventory;
	InputKey inputKey;

	for (int i = 0; i < 3; i++)
	{
		inventory.AddItem();
	}

	while (true)
	{
		inventory.Renderer();

		inputKey.Move();
		inventory.SelectNumber(inputKey);

		GotoXY(0, 10);
		inventory.ShowItem();

		Sleep(100);
		system("cls");
	}

	return 0;
}