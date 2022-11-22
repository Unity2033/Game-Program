#include <stdio.h>

void main()	
{
	// 실수를 저장하는 방법
	/*
	float x = 3.6;	// 4 byte 
	// float : 소수점 6자리 이하까지만, 정확도를 표시합니다.

	double y = 3.6;	// 8 byte
	// double : 소수점 15자리 이하까지만, 정확도를 표시합니다.

	// 소수점의 자릿수를 설정하려면 (%.원하는 수f)를 해주시면 됩니다. 
	printf("x 변수의 값 : %.10f\n", x);
	printf("y 변수의 값 : %.20lf\n", y);
	*/

	// switch문
	// 특정 조건일 때만 실행되는 조건문입니다.
	
	// switch 문에는 조건식으로 실수형 변수와
	// 실수형 상수를 사용할 수 없습니다.

	char character = 'A';
	int data = 1;
	float value = 3.6;

	switch (character) // <- 조건이 되는 값
	{
	   case 'A': printf("타이틀");
		   break;
	   case 1 : printf("마을");
		   break;
	   case 2 : printf("던전");
		   break;
	   default: printf("예외 처리");
	}
} 
