#include <stdio.h>
#include <limits.h> // 자료형 최댓값과 최솟값을 출력해주는 헤더 파일

// char, int, double
void Generic(char * name, void * value)
{
	if (name == "char")
	{ 
		printf("%c\n", *(char*)value);
	}
	else if (name == "int")
	{
		printf("%d\n", *(int*)value);
	}
	else if (name == "double")
	{
		printf("%f\n", *(double*)value);
	}
}

int main()	
{
	//범용 포인터란?
	/*
    // 자료형이 정해지지 않은 상태로 모든 자료형을 저장할
	// 수 있는 포인터입니다.

	char alphabet = 'A'; // 1 byte
	int integer = 10; // 4 byte
	double pi = 3.14; // 8 byte

	void * ptr = &alphabet;

	// 범용 포인터는 메모리 주소에 접근해서 값을 변경할 수 없습니다.

	printf("ptr이 가리키는 값 : %c\n", *(char *)ptr);
	printf("ptr의 가리키는 주소 : %p\n", ptr);

	ptr = &integer;
	printf("ptr이 가리키는 값 : %d\n", *(int*)ptr);
	printf("ptr의 가리키는 주소 : %p\n", ptr);

	ptr = &pi;
	printf("ptr이 가리키는 값 : %f\n", *(double*)ptr);
	printf("ptr의 가리키는 주소 : %p\n", ptr);

	// 범용 포인터로 변수의 메모리에 접근하려면 범용 포인터가 가리키는
	// 변수의 자료형으로 형 변환을 해주어야 합니다.

	Generic("char", &alphabet); // 문자 'A'
	Generic("int", &integer);   // 정수 10
	Generic("double", &pi);     // 실수 3.14
	*/

    // 최대값과 최솟값
	int max = 0;
	int min = INT_MAX;

	int data[ ] = { 6,10,1,2,8 };

	for (int i = 0; i < 5; i++)
	{
		if (data[i] > max)
		{
			max = data[i];
		}

		if (min >= data[i])
		{
			min = data[i];
		}
	}

	printf("data의 최댓값 : %d\n", max);
	printf("data의 최솟값 : %d\n", min);



	return 0;
} 
