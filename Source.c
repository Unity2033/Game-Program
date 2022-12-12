#include <stdio.h>

// 오버 헤드란?
// 프로그램의 실행 흐름에서 나타나는 현상으로 프로그램의 실행 흐름 도중에
// 떨어져있는 위치의 코드를 실행시켜야 할 때 추가적인 시간또는 메모리 공간을
// 사용하는 현상입니다.
/*
inline void Function(int x, int y)
{
	printf("x의 값 : %d\n", x);
	printf("y의 값 : %d\n", y);
	printf("함수 호출");
}
*/

int main()	
{
	// 인라인 함수란?
	/*
	// 함수를 호출하는 대신 함수가 호출되는 위치마다 함수의 코드를 
	// 복사하여 전달하는 방식의 함수입니다.

	Function(10, 20);

	// 인라인 함수는 함수를 호출 과정이 없으므로 처리 속도가 빠르지만,
	// 인라인 함수를 많이 사용하게 되면 함수의 코드가 복사되기 때문에 
	// 실행 파일의 크기가 커지게 됩니다.
	*/

	// 1부터 n까지의 합
	/*
	int n = 0;
	int result = 0;

	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		result += i;
	}

	printf("result의 값 : %d", result);
	*/

	// 아스키 코드
	/*
	// 미국정보교환표준부호로 영문 알파벳을 사용하는 대표적인
	// 문자 인코딩입니다.

	// a ~ z 
	char alphabet = 97;

	// printf("alphabet의 값 : %d\n", alphabet);
	// printf("alphabet의 값 : %c\n", alphabet);

	for (int i = 0; i < 26; i++)
	{
		printf("%c ", alphabet + i);
	}
	*/

	// 포인터 연산
	int data[5] = { 1,2,3,4,5 };

	int * ptr = data;

	printf("ptr이 가라키는 값 : %d\n", *ptr);

	ptr = ptr + 2;

	printf("ptr을 증가시킨 후 가리키는 값 : %d\n", *ptr);

	ptr = ptr - 1;

	printf("ptr을 감소시킨 후 가리키는 값 : %d\n", *ptr);

	return 0;
} 
