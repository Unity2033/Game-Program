#pragma once
#include <conio.h>
#include <windows.h>

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

class InputKey
{
private :
	int x;
	int y;
	char key;

public :
	int GetX();
	int GetY();

	InputKey();
	void Move();
	void GotoXY(int x, int y);
};

