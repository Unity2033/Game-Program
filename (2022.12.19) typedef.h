#pragma once
#include <stdio.h>

// 열거형이란?
// 반드시 하나의 값만 가지게 될 변수들의 집합체입니다.

// 열거형은 정수값으로 정의할 수 없습니다.
enum State
{
	// enum은 정수값이 들어가게 되며, 따로 초기화를 해주지 
	// 않았을 때 가장 위에 있는 멤버 값이 0으로 초기화됩니다.
	IDLE,    // 대기 상태
	ATTACK = 10,	// 공격 상태
	DEFENSE,	// 방어 상태
	DEATH    // 죽은 상태

 // 열거형 멤버 중에서 값을 변경하게 되면 그 뒤에 있는 열거형
 // 멤버들도 같이 값이 바뀝니다.
};

// typedef 
// 이미 사용되는 자료형을 다른 새로운 자료형으로 
// 재정의해주는 키워드입니다.

typedef int INT32; // int == INT32

typedef struct Player
{
	int x;
	int y;
	const char* shape;
}PLAYER; // typedef로 정의할 때는 이름을 다르게 정의해야 합니다.

typedef enum Color
{
	BLACK,
	BLUE
}COLOR;

int main()
{
	// enum
	/*
	enum State state;

	// 캐릭터 상태를 지정해줄 수 있습니다.
	state = ATTACK;

	// enum은 상수이기 때문에 값을 바꿀 수 없습니다.
	// IDLE = 99;

	//printf("state의 값 : %d", state);

	switch (state)
	{
		case IDLE :	printf("대기 상태");
			break;
		case ATTACK : printf("공격 상태");
			break;
		case DEFENSE : printf("방어 상태");
			break;
		case DEATH : printf("죽음 상태");
			break;
	}
	*/

	// typedef
	/*
	int value1 = 10;
	INT32 value2 = 20;

	COLOR color;
	color = BLUE;

	PLAYER player;
	player.shape = 'A';
	*/

	// 소수
	// 1보다 큰 자연수 중 1과 자기 자신만을 약수로 가지는 수

	// 1. 정수값 입력
	int value = 0;
	int flag = 0;

	scanf_s("%d", &value);

	for (int i = 2; i < value; i++)
	{
		if (value % i == 0)
		{
			flag = 1;
			break;
		}
	}

	if (flag == 0)
	{
		printf("소수");
	}
	else
	{
		printf("소수가 아닙니다.");
	}


	// 소수(O) vs 소수(X)

	// 2,3,5,7,11,13,17,19,23,29,31

	return 0;
}
