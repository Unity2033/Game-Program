#pragma once
#include <stdio.h>

// 함수 포인터
/*
void Calculator()
{
	printf("Calculator Call\n");
}

void Function(int x)
{
	x = 100;
	printf("Function Call %d\n", x);
}

int Process(int x, int y)
{
	return x + y;
}
*/

// 구조체
struct Character
{
	char* name;
	int attack;
	float health;
};

void ObjectOutput(struct Character character)
{
	printf("character의 이름 : %s\n", character.name);
	printf("character의 공격력 : %d\n", character.attack);
	printf("character의 체력 : %f\n", character.health);
}

int main()
{
	// 함수 포인터란?		  
	/*
	// 함수의 주솟값을 저장하고 가리킬 수 있는 변수입니다.

	// 함수의 이름은 함수의 주소를 나타냅니다.
	// printf("Calculator의 주소 : %p", Calculator);

	// 반환형 (* 포인터 이름) (매개변수 목록)
	// void     (*ptr)          ( )

	// 함수 포인터 선언
	void (*ptr) ();
	int (*ptr1) (int, int);

	ptr = Calculator;
	ptr1 = Process;

	ptr();

	ptr = Function;

	ptr(10);

	printf("함수 포인터가 출력하는 값 : %d\n", ptr1(10, 20));

	// 함수 포인터는 함수의 반환형과 매개변수의 타입이 일치해야 하며,
	// 함수 포인터를 사용하여 동적으로 메모리를 할당할 수 없습니다.

	void (*arrayPtr[2]) ();
	arrayPtr[0] = Calculator;
	arrayPtr[1] = Function;

	// 함수를 호출하는 방법은 호출할 함수가 컴파일 시에 결정되어야 합니다.
	// 그렇기 때문에 실행 시간에 동적으로 변경할 수 없습니다.
	arrayPtr[0]();
	arrayPtr[1](10);
	*/

	// 구조체란?
	// 여러 개의 변수를 하나의 집합으로 구조화한 다음  
	// 하나의 객체를 생성하는 것입니다.

	struct Character champion1;

	// 구조체 변수를 초기화할 때 초기화 목록을 사용할 경우
	// 가장 첫 번째 멤버 변수부터 자료형에 맞추어 데이터를 저장해야 합니다.
	struct Character champion2 = { "Alistar", 200.0f ,5 };

	champion1.name = "Leesin";
	champion1.attack = 10;
	champion1.health = 100.0f;

	ObjectOutput(champion1);
	ObjectOutput(champion2);

	return 0;
}
