#include <stdio.h>
#include <windows.h>

// 전처리기란?
// 프로그램이 컴파일되기 이전에 프로그램에 대한 사전
// 처리하는 과정입니다.

// 매크로란?
// 프로그램 내에서 컴파일러가 매크로를 만났을 때, 대체할
// 문자열을 정의하는 것입니다.
#define	PI 3.141592
#define UP 72

// 매크로 함수 정의
#define CALCULATOR(x) (x + x)

#define width 10
#define height 10

int main()	
{
	// 매크로
	/*
	printf("PI의 값 : %f\n", PI);

	// 매크로는 메모리 공간이 존재하지 않기 때문에
	// 값을 변경할 수 없습니다.
	// PI = 3000;

	int value = 5;
	printf("%d\n", CALCULATOR(value));
	*/

	// 2차원 배열이란?
	/*
	// 배열의 요소로 또 다른 배열을 가지는 배열입니다.
	char array2D[width][height] =
	{
		{ 1,1,1,1,1,1,1,1,1,1 },
	    { 1,1,0,1,1,0,1,1,0,1 },
		{ 1,1,0,1,1,0,1,1,0,1 },
		{ 1,1,0,0,0,1,1,0,0,1 },
		{ 1,1,1,1,0,1,1,0,1,1 }, 
		{ 1,0,0,0,0,1,1,0,0,1 },
		{ 1,1,1,1,0,1,1,1,0,1 },
		{ 1,0,0,0,0,0,0,1,0,1 },
		{ 1,1,0,1,1,1,0,0,0,1 },
		{ 1,1,1,1,1,1,1,1,1,1 },
	};


	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < height; j++)
		{
			if (array2D[i][j] == 1)
			{
				printf("■");
			}
			else if (array2D[i][j] == 0)
			{
				printf("□");
			}		
		}

		printf("\n");
	}
	*/

	// 글자 타이핑 효과
	/*
	int count = 0;

	const char * content = "League of Legend에 오신 것을 환영합니다.";

	//[L] ~ [.][\0]
	while (content[count] != '\0')
	{
		//[L][e][a]
		printf("%c", content[count++]);
		Sleep(100);
	}

	// fflush(stdout)
	*/

	// 글자 색상 설정
	/*
	// 0 = 검정색
	// 1 = 파란색
	// 2 = 초록색
	// 3 = 옥색
	// 4 = 빨간색
	// 5 = 자주색
	// 6 = 노란색
	// 7 = 횐색
	// 8 = 회색
	// 9 = 연한 파란색
	// 10 = 연한 초록색
	// 11 = 연한 옥색
	// 12 = 연한 빨간색
	// 13 = 연한 자주색
	// 14 = 연한 노란색
	// 15 = 진한 흰색
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);

	printf("안녕하세요. 다들 잘 지내시나요?");
	*/

	// 콘솔 크기 설정
	// cols = 가로, lines = 세로
	//system("mode con:cols=50 lines=10");
	   
	// 콘솔 제목 설정
	SetConsoleTitle(TEXT("League of Legend"));

	return 0;
} 
