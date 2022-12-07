#include <stdio.h>

void Calculator(int x)
{
	x = 1000;
}

void Swap(int * x, int * y)
{
	int temp = *x;
	*x = *y;
	*y = temp;

	printf("x의 주소 : %p\n", x);
	printf("y의 주소 : %p\n", y);

	printf("x의 값 : %d\n", *x);
	printf("y의 값 : %d\n", *y);
}


int main()	
{
	// call by value (값에 의한 전달)
	/*
	// 함수 호출 시 넘기는 인자의 값이 매개변수에
	// 복사되어서 함수 내에서 매개변수에 직접적인
	// 데이터를 변경해도 인수에 영향을 주지 않는 전달입니다.
	int value = 0;

	Calculator(value); // <- 값이 반환된 거입니다.
			   
	printf("value의 값 : %d", value);
	*/

	int A = 10;
	int B = 20;

	Swap(&A, &B);

	printf("A의 주소 : %p\n", &A);
	printf("B의 주소 : %p\n", &B);

	printf("A의 값 : %d\n", A);
	printf("B의 값 : %d\n", B);

	return 0;
} 
