#include <stdio.h>

// 재귀 함수
/*
void Function(int x)
{
	if (x == 0)
	{
		return;
	}

	// 재귀 함수는 함수를 계속 호출하기 때문에 스택 영역에
	// 메모리가 계속 쌓이게 되므로 스택 오버플로우가 일어납니다.
	printf("함수 실행\n");
	Function(x - 1);

	// 재귀 함수의 경우 특정한 시점에서 함수를 반환해야 하며, 
	// 재귀적으로 호출한 함수는 스택 프레임에 의해 마지막에 호출된 
	// 함수부터 차례대로 스택 영역에서 해제됩니다.
}
*/

int Factorial(int x)
{
	if (x == 1)
	{
		return 1;
	}
	else
	{
		return x * Factorial(x - 1);
	}
}

int main()	
{
	// 재귀 함수
	/*
	// 어떤 함수에서 자신을 다시 호출하여 작업을 
	// 수행하는 함수입니다.
	int count = 5;

	Function(count);
	*/
		
	// 삼항 연산자
	/*
	int value1 = 10;
	int value2 = 20;

	//           조건          참일 때 거짓일 때
	printf("%d", value1 != value2 ? 1 : 0);
	*/

	// 팩토리얼
	int value = 0;

	scanf_s("%d", &value);
				 
	printf("%d",Factorial(value));

	return 0;
} 
