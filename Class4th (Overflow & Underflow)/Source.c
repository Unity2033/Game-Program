#include <stdio.h>

void main()
{
#pragma region 오버플로우
	// 특정한 자료형이 표현할 수 있는 최댓값의 범위를
	// 넘어서 연산을 수행하는 과정입니다.

	// char storage = 127 + 1;

	// printf("storage의 값 : %d\n", storage);

	// 오버플로우는 부호 없는 자료형에서도 똑같이 발생하며,
	// 실수일 때 오버플로우가 발생하면 infinity라는 값으로 출력됩니다.
#pragma endregion

#pragma region 언더플로우
	// 특정한 자료형이 표현할 수 있는 최솟값의 범위를
	// 넘어서 연산을 수행하는 과정입니다.

	// char data = -128 - 1;

	// printf("data변수의 값 : %d\n", data);

	// 언더플로우는 부호 없는 자료형에서도 똑같이 발생하며,
	// 실수일 때 언더플로우가 발생하면 0이라는 값으로 출력됩니다.
#pragma endregion

#pragma region 부호 없는 자료형

	// unsigned int count = 4294967295;
	// 
	// // [1111 1111] [1111 1111] [1111 1111] [1111 1111]
	// printf("signed count 변수의 값 : %d\n", count);
	// 
	// // [1111 1111] [1111 1111] [1111 1111] [1111 1111]
	// printf("unsigned count 변수의 값 : %u\n", count);

#pragma endregion

#pragma region 실수를 표현하는 방법

	// float decimal = 3.1f;
	// double x = 3.1;
	// 
	// 정수형 리터럴 상수는 저장하는 값의 범위가 크지 않으면
	// int 자료형으로 저장되며, 실수형 리터럴 상수는 double
	// 자료형으로 저장됩니다.
	// 
	// printf("decimal 변수의 값 : %.7f\n", decimal);
	// printf("x 변수의 값 : %.16lf\n", x);

	// 표준 출력 함수로 소수를 출력할 때 4 byte 크기의 실수형
	// 자료형은 소수점 이하 6자리까지만 표기하며, 8 byte 크기의
	// 실수형 자료형은 소수점 이하 15자리까지만 표기합니다.

#pragma endregion
}