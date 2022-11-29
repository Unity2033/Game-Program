#pragma once
#include <stdio.h>

void main()
{
	// 모듈러 연산자
	// 어떠한 숫자를 다른 숫자로 나눈 나머지를
	// 구하는 연산자입니다.
	// printf("%d", 11 % 4);

	// 약수
	/*
	// 12의 약수를 출력해주세요,
	// 1,2,3,4,6,12
	int value = 12;

	for (int i = 1; i <= value; i++)
	{
		if (value % i == 0)
		{
			printf("%d ", i);
		}
	}
	*/

	// while문
	/*
	// 특정 조건을 만족할 때까지 계속해서 주어진
	// 명령문을 실행하는 반복문입니다.

	int variable = 5;

	while(variable > 0) // <- 조건이 참이기 때문에
	{
		if (variable == 1)
		{
			break;
		}

		if (variable == 3)
		{
			variable--;
			continue;
		}

		// while문은 조건이 계속 참일 때
		// 무한 반복합니다.
		printf("variable의 값 : %d\n", variable);
		variable--;
	}
	*/

	// do-while문
	/*
	// 조건과 상관없이 한 번의 작업을 수행한 다음 조건에
	// 따라 명령문을 실행하는 반복문입니다.

	int data = 5;

	do
	{
		printf("data의 값 : %d\n", data);
		data--;
	}
	while (data > 5);
	*/

	// 복합 대입 연산자
	/*
	int value = 10;
	value += 1;

	printf("value의 값 : %d\n", value);

	value -= 6;

	printf("value의 값 : %d\n", value);

	value *= 2;

	printf("value의 값 : %d\n", value);

	value /= 4;

	// 정수랑 정수를 계산하게 되면 무조건 정수만 출력합니다.
	printf("value의 값 : %d\n", value);

	value %= 2;

	printf("value의 값 : %d\n", value);
	*/
}
