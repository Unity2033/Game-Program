#pragma once
#include <stdio.h>

void main()
{
	// 2중 for문
	/*
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("내부에 있는 for문\n");
		}

		printf("외부에 있는 for문\n");
	}
	*/

	// 구구단
	/*
	for (int i = 2; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			printf("%d x %d : %d\n", i, j, i * j);
		}

		printf("\n");
	}
	*/

	// continue문
	/*
	// 현재 반복에서 명령문의 실행을 종료하고 반복문의
	// 처음으로 돌아가서 반복문의 다음 코드를 실행하는 명령문입니다.
	for (int i = 0; i < 5; i++)
	{
		if (i == 3)
		{
			break;
		}

		printf("i의 값 : %d\n", i);
	}
	*/

	// 별 생성 알고리즘
	/*
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("☆");
		}

		printf("\n");
	}
	*/

	// 시프트 연산자
	// 비트 값을 주어진 숫자만큼 부호 방향으로 이동시키는 연산자입니다.

	char value = 10; // 0000 1010

	printf("비트 왼쪽으로 3번 이동한 결과 : %d\n", value << 3); // 0101 0000 

	printf("비트 오른쪽으로 2번 이동한 결과 : %d\n", value >> 2); // 0000 0010

	// 시프트 연산자에서 대입 연산을 해야 변수에 값이 적용됩니다.
	printf("value 값 : %d\n", value);
}
