#include <stdio.h>
#include <windows.h>

#define WIDTH 11
#define HEIGHT 11

enum COLOR
{
	BLACK,
	DARKBLUE,
	DARKGREEN,
	DARKSKYBLUE,
	DARKRED,
	DARKVIOLET,
	DARKYELLOW,
	GRAY,
	DARKGRAY,
	BLUE,
	GREEN,
	SKYBLUE,
	RED,
	VIOLET,
	YELLOW,
	WHITE
};

char maze[WIDTH][HEIGHT] =
{
	{'1','1','1','1','1','1','1','1','1','1','1'},
	{'1','0','0','1','1','1','1','1','1','0','1'},
	{'1','1','0','1','1','0','0','0','0','0','1'},
	{'1','1','0','0','1','0','1','0','1','1','1'},
	{'1','1','1','0','1','1','1','0','1','1','1'},
	{'1','0','0','0','1','0','0','0','1','1','1'},
	{'1','1','1','0','1','0','1','0','1','1','1'},
	{'1','1','1','0','1','0','1','0','1','1','1'},
	{'1','1','1','0','0','0','1','0','0','0','1'},
	{'1','1','1','1','1','1','1','1','1','0','1'},
	{'1','1','1','1','1','1','1','1','1','1','1'},
};

void render()
{
	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			if (maze[i][j] == '0')
			{
				printf("  ");
			}
			else if (maze[i][j] == '1')
			{
				printf("■");
			}
		}

		printf("\n");
	}
}

int main()
{
	// render();

#pragma region 열거형
	// 서로 관련 있는 상수들을 하나의 집합으로 정의하여 이름으로 
	// 사용할 수 있도록 설계된 자료형입니다.

	for (int i = 0; i <= 15; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);

		printf("Error\n");

		if (i % 5 == 0 && i != 0)
		{
			system("pause");
		}
	}

#pragma endregion

	return 0;
}