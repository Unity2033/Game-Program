#pragma once
#include <stdio.h>

void main()
{
	// 증감 연산자
	// 피연산자를 1씩 증가 혹은 감소시킬 때 
	// 사용하는 연산자입니다.

	// 전위 증감 연산자
	/*
	// 먼저 값을 증가시키거나 감소시킨 후에
	// 변수에 값을 넣어주는 연산자입니다.
	int x = 10;
	int result = 0;

	// result(11) = (11) <- 10 + 1
	result = ++x;

	printf("result 변수의 값 : %d\n", result);

	// result(10) = (10) <- 11 - 1
	result = --x;

	printf("result 변수의 값 : %d\n", result);
	*/

	// 후위 증감 연산자
	/*
	// 값을 먼저 변수에 넣어준 다음, 증가시키거나
	// 감소시키는 연산자입니다.
	int x = 10;
	int result = 0;

	result = x++;

	printf("result 변수의 값 : %d\n", result);
	printf("x 변수의 값 : %d\n", x);

	result = x--;

	printf("result 변수의 값 : %d\n", result);
	printf("x 변수의 값 : %d\n", x);
	*/

	// 반복문
	// 프로그램 내에서 특정한 작업을 반복적으로 
	// 수행하는 명령문입니다.

	// for 문이란?
	/*
	// 초기식을 연산하여 조건식의 결과에 따라
	// 특정한 횟수만큼 반복하는 반복문입니다.

	// for문의 조건식이 처음부터 거짓이면 실행되지 않습니다.

	int value = 0;

	   // 초기식; 조건식; 증감식;
	for (int i = value; i < 5; i++)
	{
		// for문에서 조건식이 계속 참인 상태이면,
		// for문 안에 있는 내용이 무한 반복합니다.
		printf("Quest\n");
	}
	*/

	for (int i = 1; i <= 5; i++)
	{
		printf("%d\n", i);
	}

	for (int i = 5; i >= 1; i--)
	{
		printf("%d\n", i);
	}
}
