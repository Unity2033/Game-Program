#pragma once
#define _CRT_SECURE_NO_WARNINGS
// 문자열 함수에 대한 경고를 방지하는 전처리기

#include <stdio.h>
#include <windows.h>
#include <conio.h>

// HANDLE 인덱스에 접근해서 버퍼를 교체시킬 변수
int screenIndex = 0;

int width = 100;
int height = 60;

// 버퍼를 2개 생성
HANDLE Screen[2];

struct Player
{
	int x;
	int y;
	const char* shape;
};

// 구조체 포인터 선언
Player* player;

// 캐릭터 좌표를 움직이는 함수
void GotoXY(int x, int y)
{
	// COORD는 멤버 변수 x와 y를 가지고 있는 구조체입니다.
	// 구조체를 정의한 다음 x와 y에 매개변수를 넣어주는 것입니다.
	COORD position = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

// 버퍼를 초기화하는 함수
void ScreenInit()
{
	CONSOLE_CURSOR_INFO cursor;

	// 버퍼의 가로 사이즈, 버퍼의 세로 사이즈
	COORD size = { width, height };

	// Left, Top, Right, Bottom
	SMALL_RECT rect = { 0, 0, width - 1, height - 1 };

	// 화면 2개를 생성합니다.
	// Front Buffer
	Screen[0] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE,
		FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL,
		CONSOLE_TEXTMODE_BUFFER,
		NULL
	);

	SetConsoleScreenBufferSize(Screen[0], size);

	SetConsoleWindowInfo(Screen[0], TRUE, &rect);

	// Back Buffer
	Screen[1] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE,
		FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL,
		CONSOLE_TEXTMODE_BUFFER,
		NULL
	);

	SetConsoleScreenBufferSize(Screen[1], size);

	SetConsoleWindowInfo(Screen[1], TRUE, &rect);

	// 커서의 사이즈 
	cursor.dwSize = 1;

	// 커서의 활성화 여부
	// false : 거짓
	// true : 참
	cursor.bVisible = false;

	SetConsoleCursorInfo(Screen[0], &cursor);
	SetConsoleCursorInfo(Screen[1], &cursor);
}

// 버퍼를 교체하는 함수
void ScreenFlipping()
{
	// 버퍼는 하나만 활성화시킬 수 있습니다.
	SetConsoleActiveScreenBuffer(Screen[screenIndex]);
	screenIndex = !screenIndex;
}

void ScreenClear()
{
	COORD coord = { 0,0 };

	// 데이터를 전송하는 BUS(통로)
	DWORD dw; // unsigned short (2 byte)

	FillConsoleOutputCharacter
	(
		Screen[screenIndex],
		' ',
		width * height,
		coord,
		&dw
	);
}

// 버퍼를 해제하는 함수
void ScreenRelease()
{
	CloseHandle(Screen[0]);
	CloseHandle(Screen[1]);
}

// 더블 버퍼링을 이용해서 출력하는 함수
void ScreenPrint(int x, int y, const char* string)
{
	COORD cursorPosition = { x, y };

	DWORD dw;

	SetConsoleCursorPosition(Screen[screenIndex], cursorPosition);

	WriteFile
	(
		Screen[screenIndex],
		string,
		strlen(string),
		&dw,
		NULL
	);

}

int main()
{
	// Player 생성
	player = (Player*)malloc(sizeof(Player));

	player->x = 5;
	player->y = 5;
	player->shape = "♣";

	// 1. 버퍼 초기화
	ScreenInit();

	while (1)
	{
		if (GetAsyncKeyState(VK_UP)) // UP
		{
			player->y--;
			Sleep(100);
		}
		else if (GetAsyncKeyState(VK_LEFT))	// LEFT
		{
			player->x--;
			Sleep(100);
		}
		else if (GetAsyncKeyState(VK_RIGHT))	// LEFT
		{
			player->x++;
			Sleep(100);
		}
		else if (GetAsyncKeyState(VK_DOWN))	// LEFT
		{
			player->y++;
			Sleep(100);
		}

		ScreenPrint(player->x, player->y, player->shape);

		// 2. 버퍼 교체
		ScreenFlipping();

		// 3. 교체된 버퍼의 내용을 삭제
		ScreenClear();
	}

	// 게임이 종료되었을 대 버퍼를 해제합니다.
	ScreenRelease();

	return 0;
}
