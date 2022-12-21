#include <stdio.h>
#include <windows.h> // window에 관련된 헤더 파일

int main()	
{
	// Blocking 형태의 키 입력
	/*
	while (1)
	{
		      	   // 224
		int key = _getch(); // 키를 입력을 했을 때 224라는 값이 반환됩니다.
		                     
		// key <- ↑(72) 
		key = _getch();

		switch (key)
		{
			// UP KEY
			case 72: printf("↑\n");
				break;
			// LEFT KEY
			case 75: printf("←\n");
				break;
			// RIGHT KEY
			case 77: printf("→\n");
				break;
			// DOWN KEY
			case 80: printf("↓\n");
				break;
		}
		
		printf("게임 애니메이션 동작\n");
		printf("적 정찰 시스템 동작\n");
	}			
	*/

	while (1)
	{
		// Non Blocking 형태의 키 입력
		if (GetAsyncKeyState(VK_UP)) // UP
		{
			printf("↑\n");
			Sleep(1000); // 1/1000로 계산됩니다.
			// Sleep() : 특정한 시간을 대기하는 함수
		}
		else if (GetAsyncKeyState(VK_LEFT))	// LEFT
		{
			printf("←\n");
			Sleep(100); 
		}
		else if (GetAsyncKeyState(VK_RIGHT))	// LEFT
		{
			printf("→\n");
			Sleep(100); 
		}
		else if (GetAsyncKeyState(VK_DOWN))	// LEFT
		{
			printf("↓\n");
			Sleep(100);
		}

		// printf("게임 애니메이션 동작\n");
		// printf("적 정찰 시스템 동작\n");
	}

	return 0;
} 
