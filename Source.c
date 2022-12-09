#include <stdio.h>

int main()	
{
	// 상수 지시 포인터
	/*
	// 포인터가 가리키는 값을 상수화하는 포인터입니다.

	int value = 100;
	int variable = 200;

	const int * pointer = &value;

	pointer = &variable;

	// *pointer = 1000;	// 포인터 변수가 가리키는 메모리의 값을 수정할 수 없습니다.
	value = 200; // 해당 변수는 상수화가 되지 않습니다.
	variable = 300;
	*/

	// 포인터 상수 (배열의 이름)
	/*
	int data = 10;
	int signal = 20;
	int * const address = &data;

	// 포인터 상수는 새로운 주소를 저장할 수 없습니다.
	// address = &signal;
	*address = 300;
	*/

	// 홀수 & 짝수 

	int value = 0;

	scanf_s("%d", &value);

	if (value % 2 == 0)
	{
		printf("짝수");
	}
	else
	{
		printf("홀수");
	}

	// 1
	// 홀수

	// 10
	// 짝수

	return 0;
} 
